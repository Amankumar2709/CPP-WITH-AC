#include<iostream>
using namespace std;

int main(){

int num=5;

for(int i=0;i<num;i++){
    for(int j=1;j<=i+1;j++){
    cout<<j<<" ";
    }
    cout<<endl;
}

    return 0;
}