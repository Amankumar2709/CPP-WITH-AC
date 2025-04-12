#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    while (i <= n)
    {
        if (i % 2 != 0)
        { // Check the number is odd
            sum += i;
        }
        i++; // Increment the counter
    }

    cout << "Sum of odd numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}