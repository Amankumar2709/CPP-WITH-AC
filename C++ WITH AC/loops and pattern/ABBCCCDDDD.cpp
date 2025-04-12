#include<iostream>
using namespace std;

int main(){
    int x=6;
    char ch='a';

    for(int i=0; i<x; i++){
    for(int j=0; j<=i;j++){
   cout<<ch<<" ";
    }
    ch++;
    cout<<endl;
    }
}