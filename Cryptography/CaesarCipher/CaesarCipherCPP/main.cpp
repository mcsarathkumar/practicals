#include <iostream>
#include <limits>
//#include "cpp_util.h"

using namespace std;

string encrypt(string plainText, int key);

string decrypt(string cipherText, int key);

void validateIntegerInput(int &mappingField);

void validateIntegerInput(int &mappingField, int min, int max);

void validateLowerCaseInput(string &mappingField);

int main() {
    int userOption, key;
    string inputText;
    cout << "Caesar Cipher" << endl;
    cout << "1. Encrypt \n2. Decrypt\n3. Exit\nEnter your Option :" << endl;
    validateIntegerInput(userOption);
    switch (userOption) {
        case 1:
            cout << "Enter your Plain Text (only lower case): " << endl;
            validateLowerCaseInput(inputText);
            cout << "Enter the Shift / Key: " << endl;
            validateIntegerInput(key, 0, 25);
            cout << "Encrypted text is " << encrypt(inputText, key);
            break;
        case 2:
            cout << "Enter your Cipher Text: " << endl;
            validateLowerCaseInput(inputText);
            cout << "Enter the Shift / Key: " << endl;
            validateIntegerInput(key, 0, 25);
            cout << "Decrypted text is " << decrypt(inputText, key);
            break;
        default:
            cout << "Exiting Program" << endl;
            break;
    }
    return 0;
}


string encrypt(string plainText, int key) {
    for (char & i : plainText) {
        int newVal = int(i) + key;
        if (newVal > 122) {
            newVal -= 26;
        }
        i = char(newVal);
    }
    return plainText;
}

string decrypt(string cipherText, int key) {
    for (char & i : cipherText) {
        int newVal = int(i) - key;
        if (newVal < 97) {
            newVal += 26;
        }
        i = char(newVal);
    }
    return cipherText;
}

void validateIntegerInput(int &mappingField) {
    while (true) {
        if (cin >> mappingField) {
            break;
        } else {
            cout << "Enter a valid input : " << endl;
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

void validateLowerCaseInput(string &mappingField) {
    while (true) {
        if (cin >> mappingField) {
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
                cout << "Enter a valid lower case input : " << endl;
                cin.clear();
            }
        }
    }
}

void validateIntegerInput(int &mappingField, int min, int max) {
    while (true) {
        if (cin >> mappingField) {
            if (mappingField >= min && mappingField <= max) {
                break;
            } else {
                cout << "Enter a valid input between " << min << " and " << max << " : " << endl;
                cin.clear();
            }
        } else {
            cout << "Enter a valid input : " << endl;
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

//
//template<typename T> T &validateInput(T &val) {
//    while (true) {
//        cout << "Enter the age of the wine: ";
//        if (cin >> val) {
//            break;
//        } else {
//            cout << "Enter a valid integer value!\n";
//            cin.clear();
//            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
//        }
//    }
//    return val;
//}