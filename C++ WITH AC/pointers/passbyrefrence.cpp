#include<iostream>
#include<vector>
using namespace std;

void ChangeA(int* ptr){ // pass by refrence 
   *ptr =20;
}



int main(){
    int a = 10;
    int* ptr =&a;
   ptr--; //decrementing the pointer 

    ChangeA(&a);

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
  
    return 0;

}

