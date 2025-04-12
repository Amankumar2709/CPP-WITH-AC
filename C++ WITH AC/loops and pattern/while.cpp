#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i = 1;

    // Input the number
    cout << "Enter a positive integer:";
    cin >> n;

    // While loop to calculate sum
    while (i <= n)
    {
        sum += i;
        i++;
    }

    // Output the sum
    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;




    return 0;
}
