#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Upper part of the diamond
    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Print stars and spaces
        for (int j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "*";  // First and last position should be a star
            } else {
                cout << " ";  // Middle positions should be spaces
            }
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = n - 1; i >= 1; --i) {
        // Print leading spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Print stars and spaces
        for (int j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "*";  // First and last position should be a star
            } else {
                cout << " ";  // Middle positions should be spaces
            }
        }
        cout << endl;
    }

    return 0;
}
