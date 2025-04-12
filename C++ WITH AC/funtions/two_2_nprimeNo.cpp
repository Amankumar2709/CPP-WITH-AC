#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than 2 are not prime

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // If divisible by any number, it's not prime
        }
    }
    return true; // If not divisible by any number, it's prime
}

// Function to print prime numbers from 2 to n
void printPrimes(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " "; // Print the number if it's prime
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Prime numbers from 2 to " << n << " are: ";
    printPrimes(n); // Call the function to print primes

    return 0;
}
