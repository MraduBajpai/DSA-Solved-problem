#include <iostream>
using namespace std;

//Calculate the sum of digits using recursion
int sumOfDigits(int n) {
    // Base case: if n is 0, return 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: return last digit + sum of the remaining digits
        return (n % 10) + sumOfDigits(n / 10);
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    // Make sure the number is non-negative
    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
    } else {
        int result = sumOfDigits(number);
        cout << "Sum of digits: " << result << endl;
    }
    return 0;
}
