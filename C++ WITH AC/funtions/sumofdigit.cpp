#include<iostream>
using namespace std;

int sumOfDigit(int num){ //take a number
    int digSum=0;      //inital point 
    while(num>0){     
    int lastDig = num % 10;
    num /= 10;

     digSum += lastDig ;
}
 return digSum;
}

int main(){
    cout<<"The Sum of Digit is to be "<<sumOfDigit(3270)<<endl;


return 0;
}