#include <iostream>
#include <limits>

void validateIntegerInput(int &mappingField, int min, int max);

void validateLowerCaseInput(std::string &mappingField);

void validateLowerCaseInput(std::string &mappingField) {
    while (true) {
        if (std::cin >> mappingField) {
            bool validInput = true;
            for (char i : mappingField) {
                if (!islower(i)) {
                    validInput = false;
                    break;
                }
            }
            if (validInput) {
                break;
            } else {
                std::cout << "Enter a valid lower case input : " << std::endl;
                std::cin.clear();
            }
        }
    }
}

void validateIntegerInput(int &mappingField, int min = INT32_MIN, int max = INT32_MAX) {
    while (true) {
        if (std::cin >> mappingField) {
            if (mappingField >= min && mappingField <= max) {
                break;
            } else {
                std::cout << "Enter a valid input between " << min << " and " << max << " : " << std::endl;
                std::cin.clear();
            }
        } else {
            std::cout << "Enter a valid input : " << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}
