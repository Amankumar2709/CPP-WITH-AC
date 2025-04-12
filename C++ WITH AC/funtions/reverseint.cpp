#include <iostream>
using namespace std;

// Function to reverse an integer
int reverseInteger(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;        // Get the last digit
        reversed = reversed * 10 + digit;  // Append the digit
        num /= 10;                   // Remove the last digit from the number
    }
    return reversed;
}

int main() {
    int num;

    // Input the integer
    cout << "Enter an integer: ";
    cin >> num;

    // Reverse the integer and display the result
    int reversedNum = reverseInteger(num);
    cout << "Reversed integer: " << reversedNum<<" " << endl;

    return 0;
}

