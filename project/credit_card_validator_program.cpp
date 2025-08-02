#include <iostream>

int getDigit(int number);
int sumOddDigits(const std::string& cardNumber);
int sumEvenDigits(const std::string& cardNumber);

int main() {
    std::string cardNumber;
    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    int result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0) {
        std::cout << cardNumber << " is valid\n";
    } else {
        std::cout << cardNumber << " is not valid\n";
    }

    return 0;
}

int getDigit(int number) {

    return number < 10 ? number : number - 9;
}

int sumOddDigits(const std::string& cardNumber) {
    int sum = 0;

    for (int i = cardNumber.length() - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0';
    }
    return sum;
}

int sumEvenDigits(const std::string& cardNumber) {
    int sum = 0;

    for (int i = cardNumber.length() - 2; i >= 0; i -= 2) {
        int doubled = (cardNumber[i] - '0') * 2;
        sum += getDigit(doubled);
    }
    return sum;
}
