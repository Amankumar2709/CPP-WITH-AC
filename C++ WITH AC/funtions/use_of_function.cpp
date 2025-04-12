#include<iostream>
using namespace std;
//sum of a number 
int number (int num1, int num2){ // 
    int sum =num1+num2;
    return sum;
}

// min of two number
int minoftwo(int a, int b){ //parameter
    if(a>b){
        return b;
    }
    else{
        return a;
}
}
int main(){
    //sum of two
   cout<<"The sum of number is " << number(10,5)<<endl; //Arguments (10,5)
cout<<"The min of two "<<minoftwo(10,15);//min of two
return 0;
}