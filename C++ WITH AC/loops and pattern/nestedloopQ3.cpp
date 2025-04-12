#include <iostream>
using namespace std;

int main()
{
    int n = 5;      //roows

    for (int i = 0; i < n; i++){ // OUTER LOOP
        char ch = 'A';
        int m=3;    // coloums
        for (int j = 0; j < m; j++)  { //inner loop
            cout<<ch <<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
    return 0;
}