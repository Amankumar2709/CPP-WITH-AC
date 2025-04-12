#include <iostream>
#include <cmath>  // For using the pow() function
using namespace std;

int main() {
    int binary, decimal = 0, base = 1, last_digit;

    cout << "Enter a binary number: ";
    cin >> binary;

    int temp = binary;

    while (temp > 0) {
        last_digit = temp % 10;  // Extract the last digit
        decimal += last_digit * base;  // Add to the decimal equivalent
        base *= 2;  // Move to the next base (powers of 2)
        temp /= 10;  // Remove the last digit
    }

    cout << "The decimal equivalent of binary " << binary << " is: " << decimal << endl;

    return 0;
}
