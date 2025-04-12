#include<iostream>
using namespace std;

int number(int n){
    int fact=1;


    for(int i=1;i<=n;i++){
        fact=fact*i;
       }
       return fact;
}
int main(){

    cout<<"The factorial of 5 is "<<number(5)<<endl;
    return 0;
}