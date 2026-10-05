#include <iostream>
#include <cmath>
using namespace std;

// 1. Check whether a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// 2. Print all primes in a range
void printPrimesInRange(int start, int end) {
    cout << "Primes between " << start << " and " << end << ": ";
    bool found = false;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) cout << "None";
    cout << endl;
}

// 3. Print the Fibonacci series
void printFibonacci(int n) {
    if (n <= 0) {
        cout << "Please enter a positive number of terms.\n";
        return;
    }
    long long t1 = 0, t2 = 1, nextTerm;
    cout << "Fibonacci Series (" << n << " terms): ";
    
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << t1 << " ";
            continue;
        }
        if (i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " ";
    }
    cout << endl;
}

// 4. Check for an Armstrong number
bool isArmstrong(int n) {
    if (n < 0) return false;
    int original = n;
    int sum = 0;
    int digits = 0;
    
    // Count the number of digits
    int temp = n;
    if (temp == 0) digits = 1;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    // Calculate the sum of digits raised to the power of 'digits'
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += round(pow(digit, digits));
        temp /= 10;
    }
    
    return sum == original;
}

int main() {
    int choice;
    
    do {
        cout << "\n=====================================\n";
        cout << "    ADVANCED NUMBER UTILITY MENU     \n";
        cout << "=====================================\n";
        cout << "1. Check whether a number is prime\n";
        cout << "2. Print all primes in a range\n";
        cout << "3. Print the Fibonacci series\n";
        cout << "4. Check for an Armstrong number\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int n;
                cout << "Enter a number: ";
                cin >> n;
                if (isPrime(n))
                    cout << "-> " << n << " is a Prime number.\n";
                else
                    cout << "-> " << n << " is NOT a Prime number.\n";
                break;
            }
            case 2: {
                int start, end;
                cout << "Enter start of range: ";
                cin >> start;
                cout << "Enter end of range: ";
                cin >> end;
                printPrimesInRange(start, end);
                break;
            }
            case 3: {
                int n;
                cout << "Enter number of terms for Fibonacci: ";
                cin >> n;
                printFibonacci(n);
                break;
            }
            case 4: {
                int n;
                cout << "Enter a number: ";
                cin >> n;
                if (isArmstrong(n))
                    cout << "-> " << n << " is an Armstrong number.\n";
                else
                    cout << "-> " << n << " is NOT an Armstrong number.\n";
                break;
            }
            case 5:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! Please choose between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}