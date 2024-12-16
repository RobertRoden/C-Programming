// Name: Robert Roden
// ID: 2200924
// Program: Currency Converter
// This program will convert 3 different currency types between USD, EUR, and GBP.

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;

public class Main {
    // Conversion rates for USD, EUR, and GBP
    private static final double EUR_TO_USD = 1.42;
    private static final double GBP_TO_USD = 1.64;
    private static final double GBP_TO_EUR = 1.13;

    public static void main(String[] args) {
        // Create main frame for the Currency Converter application
        JFrame frame = new JFrame("Currency Converter");
        frame.setSize(400, 300);  // Set window size
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new BorderLayout());

        // Create and configure the menu bar with font size option
        JMenuBar menuBar = new JMenuBar();
        JMenu optionsMenu = new JMenu("Options");
        JMenuItem fontSizeItem = new JMenuItem("Change Font Size");
        optionsMenu.add(fontSizeItem);
        menuBar.add(optionsMenu);
        frame.setJMenuBar(menuBar);

        // Create the main panel to hold the components (labels, text fields, combo boxes)
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(6, 2, 10, 10));  // Organize components in grid format
        panel.setBackground(new Color(240, 240, 240));  // Set background color

        // Initialize labels, text fields, combo boxes, and buttons for user interaction
        JLabel inputLabel = new JLabel("Enter Amount:");
        JTextField inputField = new JTextField();
        JLabel fromLabel = new JLabel("From Currency:");
        JComboBox<String> fromCurrency = new JComboBox<>(new String[]{"USD", "EUR", "GBP"});
        JLabel toLabel = new JLabel("To Currency:");
        JComboBox<String> toCurrency = new JComboBox<>(new String[]{"USD", "EUR", "GBP"});
        JLabel resultLabel = new JLabel("Result:");
        JLabel resultDisplay = new JLabel();
        JButton convertButton = new JButton("Convert");
        JButton clearButton = new JButton("Clear");
        JButton exitButton = new JButton("Exit");

        // Add components to the panel for display
        panel.add(inputLabel);
        panel.add(inputField);
        panel.add(fromLabel);
        panel.add(fromCurrency);
        panel.add(toLabel);
        panel.add(toCurrency);
        panel.add(resultLabel);
        panel.add(resultDisplay);
        panel.add(convertButton);
        panel.add(clearButton);
        panel.add(new JLabel()); // Empty space
        panel.add(exitButton);

        // Add the main panel to the frame
        frame.add(panel, BorderLayout.CENTER);

        // Action listeners for buttons and menu options
        // Convert button - performs the currency conversion
        convertButton.addActionListener(e -> {
            try {
                String from = fromCurrency.getSelectedItem().toString();
                String to = toCurrency.getSelectedItem().toString();
                double amount = Double.parseDouble(inputField.getText());

                // Error handling for same currency selected
                if (from.equals(to)) {
                    JOptionPane.showMessageDialog(frame, "Please select different currencies.", "Error", JOptionPane.ERROR_MESSAGE);
                    return;
                }

                // Perform conversion and display the result
                double convertedAmount = convertCurrency(amount, from, to);
                resultDisplay.setText(String.format("%.2f", convertedAmount));
            } catch (NumberFormatException ex) {
                JOptionPane.showMessageDialog(frame, "Please enter a valid number.", "Error", JOptionPane.ERROR_MESSAGE);
            }
        });

        // Clear button - resets all input fields and selections
        clearButton.addActionListener(e -> {
            inputField.setText("");
            resultDisplay.setText("");
            fromCurrency.setSelectedIndex(0);
            toCurrency.setSelectedIndex(0);
        });

        // Exit button - closes the application
        exitButton.addActionListener(e -> System.exit(0));

        // Font size change menu - allows user to change font size
        fontSizeItem.addActionListener(e -> {
            String input = JOptionPane.showInputDialog(frame, "Enter new font size:", "Font Size", JOptionPane.PLAIN_MESSAGE);
            try {
                int fontSize = Integer.parseInt(input);
                Font font = new Font("Arial", Font.PLAIN, fontSize);
                inputField.setFont(font);
                resultDisplay.setFont(font);
            } catch (NumberFormatException ex) {
                JOptionPane.showMessageDialog(frame, "Invalid font size entered.", "Error", JOptionPane.ERROR_MESSAGE);
            }
        });

        // Display the main frame
        frame.setVisible(true);
    }

    /**
     * Converts an amount from one currency to another using predefined rates.
     *
     * @param amount the amount to convert
     * @param from   the currency to convert from
     * @param to     the currency to convert to
     * @return the converted amount
     */
    private static double convertCurrency(double amount, String from, String to) {
        // Conversion logic based on selected currencies
        switch (from + "-" + to) {
            case "USD-EUR":
                return amount / EUR_TO_USD;
            case "USD-GBP":
                return amount / GBP_TO_USD;
            case "EUR-USD":
                return amount * EUR_TO_USD;
            case "EUR-GBP":
                return amount / GBP_TO_EUR;
            case "GBP-USD":
                return amount * GBP_TO_USD;
            case "GBP-EUR":
                return amount * GBP_TO_EUR;
            default:
                throw new IllegalArgumentException("Invalid currency conversion.");
        }
    }
}
