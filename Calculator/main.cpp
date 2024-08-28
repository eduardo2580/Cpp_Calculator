#include <iostream>
#include <stdlib.h>

using namespace std;

float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}

int main() {
    float num1, num2;
    int choice;
    char continueCalculation;

    do {
        cout << "First Number: ";
        cin >> num1;
        cout << "Second Number: ";
        cin >> num2;

        cout << "========================================" << endl;
        cout << "|        CHOICES      |     NUMBER     |" << endl;
        cout << "========================================" << endl;
        cout << "|       ADDITION      |        1       |" << endl;
        cout << "========================================" << endl;
        cout << "|      SUBTRACTION    |        2       |" << endl;
        cout << "========================================" << endl;
        cout << "|    MULTIPLICATION   |        3       |" << endl;
        cout << "========================================" << endl;
        cout << "|      DIVISION       |        4       |" << endl;
        cout << "Choice: ";
        cin >> choice;

        float result = 0;

        switch(choice) {
            case 1:
                result = add(num1, num2);
                break;
            case 2:
                result = subtract(num1, num2);
                break;
            case 3:
                result = multiply(num1, num2);
                break;
            case 4:
                result = divide(num1, num2);
                break;
            default:
                cout << "Invalid choice! Please select a valid operation." << endl;
                continue;
        }

        cout << "Answer: " << result << endl;

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> continueCalculation;
        system("cls");

    } while (continueCalculation == 'y' || continueCalculation == 'Y');

    return 0;
}
