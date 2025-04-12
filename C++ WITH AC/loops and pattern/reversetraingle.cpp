#include<iostream>
using namespace std;
int main(){
    int x=5;
    char ch='A';
    for(int i=0;i<x;i++){
        for(int j=i+1;j>0;j--){
            cout<<ch<<" ";
              ch++;
        }
        cout<<endl;
    }

    return 0;
}