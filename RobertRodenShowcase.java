import javax.swing.*;
import java.awt.*;
import java.text.SimpleDateFormat;
import java.util.Date;

public class RobertRodenShowcase {
    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            JFrame frame = new JFrame("Robert Roden - Resume");
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.setSize(900, 800);
            frame.setLocationRelativeTo(null);

            // Set a modern font for the GUI
            Font font = new Font("Arial", Font.PLAIN, 16);

            // Main Panel to hold everything
            JPanel panel = new JPanel();
            panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
            panel.setBackground(new Color(240, 240, 240));

            // Title section
            JLabel titleLabel = new JLabel("Robert Roden's Resume", JLabel.CENTER);
            titleLabel.setFont(new Font("Arial", Font.BOLD, 24));
            titleLabel.setForeground(new Color(30, 144, 255));
            panel.add(titleLabel);

            // Contact Section
            JPanel contactPanel = new JPanel();
            contactPanel.setLayout(new FlowLayout(FlowLayout.LEFT));
            contactPanel.setBackground(new Color(240, 240, 240));

            JLabel contactLabel = new JLabel("<html><b>Contact:</b> Springtown, TX | 817-909-7410 | robertroden04@gmail.com</html>");
            contactLabel.setFont(font);
            contactPanel.add(contactLabel);

            panel.add(contactPanel);

            // Objective Section
            JPanel objectivePanel = new JPanel();
            objectivePanel.setLayout(new FlowLayout(FlowLayout.LEFT));
            objectivePanel.setBackground(new Color(240, 240, 240));

            JLabel objectiveLabel = new JLabel("<html><b>Objective:</b><br>Driven and detail-oriented Software Developer seeking a challenging role to use my ability in Java, C++, C#, SQL and many more full stack languages and frameworks. I am passionate about crafting efficient, secure, and innovative software solutions. I am eager to contribute to a dynamic team and contribute to the organization's growth.</html>");
            objectiveLabel.setFont(font);
            objectivePanel.add(objectiveLabel);

            panel.add(objectivePanel);

            // Certifications Section
            JPanel certificationsPanel = new JPanel();
            certificationsPanel.setLayout(new FlowLayout(FlowLayout.LEFT));
            certificationsPanel.setBackground(new Color(240, 240, 240));

            JLabel certificationsLabel = new JLabel("<html><b>Certifications:</b><br>Tarrant County College: <br>COSC-2425-86002: Computer Organization<br>ITNW-1425-86005: Fundamentals Networking Tech<br>ITSE-1430-86002: Introduction to C# Programming<br>ITSE-1450-86002: System Analysis and Design<br>CPMT-1403-86003: Intro to Computer Technology<br>ITSY-1300-58001: Fundamental Information Security<br>ITNW-1309-31001: Fundamentals of Cloud Computing<br>ITSE-2409-86002: Database Programming - SQL<br>ITSE-2417-86001: Java Programming<br><br>Codecademy: <br>Skill Path (3 Hours) – Fundamentals of Cybersecurity<br>Skill Path (22 Hours) - 220-1101: CompTIA A+ Core 1<br>Career Path (150 Hours) – Full Stack Engineering (in progress)</html>");
            certificationsLabel.setFont(font);
            certificationsPanel.add(certificationsLabel);

            panel.add(certificationsPanel);

            // Experience Section
            JPanel experiencePanel = new JPanel();
            experiencePanel.setLayout(new FlowLayout(FlowLayout.LEFT));
            experiencePanel.setBackground(new Color(240, 240, 240));

            JLabel experienceLabel = new JLabel("<html><b>Experience:</b><br>Tarrant County Law Enforcement Academy | Administrative Assistant (Technology) | Apr. 2024 - Present<br>Created spreadsheets to hold data for academy<br>Scanned and stored important police cadet records<br>Held occasional meetings with staff to improve teamwork<br>Resolve computer problems with administration and students<br><br>3 Parrots Taco Shop | Team Member | Aug. 2022 – Apr. 2024<br>Prepare and cook food items for customers<br>Workplace cleanliness<br>Teamwork and team building<br>Money handling</html>");
            experienceLabel.setFont(font);
            experiencePanel.add(experienceLabel);

            panel.add(experiencePanel);

            // Education Section
            JPanel educationPanel = new JPanel();
            educationPanel.setLayout(new FlowLayout(FlowLayout.LEFT));
            educationPanel.setBackground(new Color(240, 240, 240));

            JLabel educationLabel = new JLabel("<html><b>Education:</b><br>Western Governors University | B.S. Cybersecurity & Information Assurance | Dec. 2024 - Present<br>Tarrant County College | A.A.S Information Technology – Programming | Jun. 2022 – Dec. 2024</html>");
            educationLabel.setFont(font);
            educationPanel.add(educationLabel);

            panel.add(educationPanel);

            // Skills Section
            JPanel skillsPanel = new JPanel();
            skillsPanel.setLayout(new FlowLayout(FlowLayout.LEFT));
            skillsPanel.setBackground(new Color(240, 240, 240));

            JLabel skillsLabel = new JLabel("<html><b>Skills & Abilities:</b><br>Problem solving<br>Communication<br>Leadership<br>C++<br>C#<br>Java<br>MySQL<br>SSMS<br>ITIL<br>Cybersecurity<br>Networking<br>Programming<br>Critical thinking<br>Full stack development</html>");
            skillsLabel.setFont(font);
            skillsPanel.add(skillsLabel);

            panel.add(skillsPanel);

            // Date and Time Section
            JPanel datePanel = new JPanel();
            datePanel.setLayout(new FlowLayout(FlowLayout.RIGHT));
            datePanel.setBackground(new Color(240, 240, 240));

            JLabel dateLabel = new JLabel();
            dateLabel.setFont(new Font("Arial", Font.ITALIC, 14));
            datePanel.add(dateLabel);

            panel.add(datePanel);

            // Update date and time every second
            Timer timer = new Timer(1000, e -> {
                SimpleDateFormat sdf = new SimpleDateFormat("MM/dd/yyyy HH:mm:ss");
                dateLabel.setText("Current Date & Time: " + sdf.format(new Date()));
            });
            timer.start();

            // Adding everything to the frame
            frame.add(panel);
            frame.setVisible(true);
        });
    }
}
