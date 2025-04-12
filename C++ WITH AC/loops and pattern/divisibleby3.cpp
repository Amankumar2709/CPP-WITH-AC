#include<iostream>
using namespace std;

int main(){

int a, sum =0; 
cout<<"enter the number:";
cin>>a;
 
 for(int i=0; i<a; i++){
    if(i%3 ==0){
        sum+=i;
    }
 }
 cout<<"THE SUM OF ALL NUMBER WHICH IS DIVISIBLE BY 3 BETWEEN 1 TO " <<a<<" is: "<<sum;


    return 0;
}
