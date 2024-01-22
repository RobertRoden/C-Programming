//This program will request a hexadecimal number and display the hexadecimal number that is one greater.
//By: Robert Roden
#include <iostream>
#include <string>
#include <cctype>

std::string to_hex(unsigned long num) {
    std::string hexStr;
    const std::string hexDigits = "0123456789ABCDEF";

    if (num == 0) {
        return "0x0";
    }

    while (num > 0) {
        hexStr = hexDigits[num % 16] + hexStr;
        num /= 16;
    }

    return "0x" + hexStr;
}

bool is_hex(const std::string& s) {
    if (s.length() <= 2 || s[0] != '0' || s[1] != 'x') {
        return false;
    }
    for (auto it = s.begin() + 2; it != s.end(); ++it) {
        if (!std::isxdigit(*it)) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;

    while (true) {
        std::cout << "Please enter a hexadecimal literal: ";
        std::cin >> input;

         if (!is_hex(input)) {
            std::cout << "That is not a valid hexadecimal number\n";
            continue;
        }

        unsigned long num = std::stoul(input.substr(2), nullptr, 16);
        std::cout << "The next hexadecimal number is: " << to_hex(num + 1) << "\n"; 
    }

    return 0;
}
