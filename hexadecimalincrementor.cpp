
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>  // For std::isxdigit

std::string incrementHex(const std::string& hex) {
    unsigned int num;
    std::stringstream ss;

    // Remove "0x" prefix if present
    std::string hexPart = hex.substr(0, 2) == "0x" ? hex.substr(2) : hex;

    // Check if the string is non-empty and contains only valid hexadecimal characters
    if (hexPart.empty() || hexPart.find_first_not_of("0123456789abcdefABCDEF") != std::string::npos) {
        return "Invalid";
    }

    // Convert hex string to number
    ss << std::hex << hexPart;
    ss >> num;

    // Increment number
    num++;

    // Convert back to hex string without using hex formatting specifier
    ss.str("");
    ss.clear();
    ss << std::hex << num;

    return ss.str();
}
int main() {
    std::string hexInput;

    while (true) {
        std::cout << "Please enter a hexadecimal literal:";
        std::cin >> hexInput;

        if (hexInput == "exit") {
            break;
        }

        std::string result = incrementHex(hexInput);
        if (result == "Invalid") {
            std::cout << "That is not a valid hexadecimal number" << std::endl;
        }
        else {
            std::cout << "The next hexadecimal number is: 0x" << result << std::endl;
        }
    }

    return 0;












