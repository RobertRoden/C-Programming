//This program will input a hexadecimal literal and display the hex number.
// By: Robert Roden
#include <iostream>
#include <string>
#include <sstream>
#include <cctype> 

std::string incrementHex(const std::string& hex) {
    unsigned int num;
    std::stringstream ss;

    std::string hexPart = hex.substr(0, 2) == "0x" ? hex.substr(2) : hex;

    if (hexPart.empty() || hexPart.find_first_not_of("0123456789abcdefABCDEF") != std::string::npos) {
        return "Invalid";
    }

    ss << std::hex << hexPart;
    ss >> num;

    num++;

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

        std::string result = incrementHex(hexInput);
        if (result == "Invalid") {
            std::cout << "That is not a valid hexadecimal number" << std::endl;
        }
        else {
            // This is to capitalize the letters in the output.
            for (char& c : result) {
                c = std::toupper(c);
            }
            std::cout << "The next hexadecimal number is: 0x" << result << std::endl;
        }
    }

    return 0;
}
