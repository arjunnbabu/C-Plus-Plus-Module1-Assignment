#include <iostream>
using namespace std;

int main() {
    bool passed;
    cout << "Enter 1 for Pass, 0 for Fail: ";
    cin >> passed;

    if (passed)
        cout << "Passed";
    else
        cout << "Failed";

    return 0;
}