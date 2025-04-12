// CHECK THE NUMBER IS PRIME OR NOT
#include <iostream>
using namespace std;


 int main (){
    bool isprime = true;
    int a;
    int i=2;  //PRIME NUMBER IS STARTED FROM 2

    cout<<"Enter the number: ";
    cin>>a;

    do{
        if(a<=1){
            isprime =false;
            break;
        }
       if(a%i ==0 && a!= 0){
       isprime=false;
       break;
       }
       i++;
    }while(i<=a/2);
    if(isprime)
    cout<<a<<" is a prime number";
    else
    cout<<a<<" is a not prime number";

    return 0;
 }