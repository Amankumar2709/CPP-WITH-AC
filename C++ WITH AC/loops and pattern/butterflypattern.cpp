#include <iostream>
using namespace std;

int main() {
    int n = 3;  // Number of rows

    // Upper part of the butterfly
    for (int i = 1; i <= n; ++i) {
        // Left wing of the butterfly (stars)
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); ++j) {
            cout << " ";
        }
        // Right wing of the butterfly (stars)
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the butterfly
    for (int i = n; i >= 1; --i) {
        // Left wing of the butterfly (stars)
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); ++j) {
            cout << " ";
        }
        // Right wing of the butterfly (stars)
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
