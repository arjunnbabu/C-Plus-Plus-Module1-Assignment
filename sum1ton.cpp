#include <iostream>
#include <cmath>
using namespace std;

// 1. Sum of 1 to N
int sum1ToN(int n) {
    return n * (n + 1) / 2;
}

// 2. Count the Digits
int countDigits(int n) {
    if (n == 0) return 1;
    int count = 0;
    n = abs(n);
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

// 3. Reverse a Number
int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

// 4. Sum of the Digits
int sumOfDigits(int n) {
    int sum = 0;
    n = abs(n);
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// 5. Check Palindrome
bool isPalindrome(int n) {
    if (n < 0) return false;
    int original = n;
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return original == rev;
}

int main() {
    int choice, n;
    
    do {
        cout << "\n==============================\n";
        cout << "       NUMBER UTILITY MENU      \n";
        cout << "==============================\n";
        cout << "1. Sum of 1 to N\n";
        cout << "2. Count digits in a number\n";
        cout << "3. Reverse a number\n";
        cout << "4. Sum of the digits of a number\n";
        cout << "5. Check if a number is a palindrome\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter the number (N): ";
            cin >> n;
        }

        switch (choice) {
            case 1:
                cout << "-> Sum from 1 to " << n << " is: " << sum1ToN(n) << endl;
                break;
            case 2:
                cout << "-> Number of digits: " << countDigits(n) << endl;
                break;
            case 3:
                cout << "-> Reversed number: " << reverseNumber(n) << endl;
                break;
            case 4:
                cout << "-> Sum of digits: " << sumOfDigits(n) << endl;
                break;
            case 5:
                if (isPalindrome(n))
                    cout << "-> " << n << " is a Palindrome.\n";
                else
                    cout << "-> " << n << " is NOT a Palindrome.\n";
                break;
            case 6:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! Please choose between 1 and 6.\n";
        }
    } while (choice != 6);

    return 0;
}