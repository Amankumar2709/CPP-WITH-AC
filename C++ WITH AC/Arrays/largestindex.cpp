#include <iostream>
#include <vector>
#include <limits.h> // For INT_MAX and INT_MIN

using namespace std;

int main() {
    // Sample array
    vector<int> arr = {3, 7, 2, 9, 4, 1, 5};

    // Variables to store indices of min and max
    int maxIndex = 0, minIndex = 0;
    
    // Initialize max and min to first element
    int maxValue = arr[0], minValue = arr[0];

    // Loop through array to find min and max values
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }

    // Print results
    cout << "Index of highest value: " << maxIndex << endl;
    cout << "Index of lowest value: " << minIndex << endl;

    return 0;
}
