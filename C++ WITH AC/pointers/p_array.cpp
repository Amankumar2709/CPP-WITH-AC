#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr []={1,2,3,4,5};

    int a=10;
    int* ptr =&a;
     cout<<ptr<<endl; // address of pointer 

     ptr++; // 1int = 4 bytes;
cout<<ptr<<endl;

ptr= ptr +2; //2int = 8 bytes;
cout<<ptr<<endl;

cout<< *arr <<endl;
cout<< *arr+1 <<endl;
cout<< *arr+2 <<endl;
cout<< *arr+3 <<endl;
              


}
