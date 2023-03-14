#include <iostream>
#include <string>

using namespace std;

bool validateCreditCard(string cardNumber) {
    int sum = 0;
    bool isSecondDigit = false;

    for (int i = cardNumber.length() - 1; i >= 0; i--) {
        int digit = cardNumber[i] - '0';

        if (isSecondDigit) {
            digit *= 2;
            if (digit > 9) {
                digit = digit % 10 + digit / 10;
            }
        }

        sum += digit;
        isSecondDigit = !isSecondDigit;
    }

    return sum % 10 == 0;
}

int main() {
    string cardNumber;

    cout << "Enter your credit card number: ";
    cin >> cardNumber;

    if (validateCreditCard(cardNumber)) {
        cout << "Valid credit card." << endl;
    }
    else {
        cout << "Invalid credit card." << endl;
    }

    return 0;
}

// This implementation uses the Luhn algorithm to validate the credit card number. The algorithm works by iterating through the digits of the credit card number from right to left and doubling every second digit. If the doubled digit is greater than 9, the digits of the product are summed. Then, the sum of all digits is computed, and if the sum is divisible by 10, the credit card number is considered valid.