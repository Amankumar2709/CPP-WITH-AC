#include<iostream>
using namespace std;

int main(){
    int x=4;
    char ch='A'; 
for(int i=0;i<x;i++){ //outer 
    for(int j=0;j<i;j++){
        cout<<" ";
    }
     for(int k=0;k<x-i;k++){
        cout<<ch;
     }
     cout<<endl;
     ch++; //it will increase a alphabet
}


return 0;
}
