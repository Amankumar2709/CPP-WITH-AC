#include <iostream>
using namespace std;

int  sumN(int n){
    int sum=0;

    for(int i=0;i<=n;i++){
        sum+= i;
    }
    return sum;
}

    int main(){ 
        cout<<"The Sum of number from 1 to 5 is "<<sumN(5)<<endl;
           cout<<"The Sum of number from 1 to 10 is "<<sumN(10)<<endl;
              cout<<"The Sum of number from 1 to 20 is "<<sumN(20);

        return 0;
    }
