#include<iostream>
#include<vector>
using namespace std;

int main (){
    int a= 10;
    int b=20;
    float price = 102.34;

    int* ptr =&a;
     int* ptr1 =&b;
     float* ptr3 =&price;

    float** ParPtr =&ptr3; // pointer to pointer 

      cout<<ParPtr<<endl; // pointer to oointer 
      cout<<ptr<<endl;
      cout<<ptr1<<endl;
      cout<< &ptr<<endl;
      cout<< &ptr1<<endl;
      cout<<&ptr3<< endl; // pointer to pointer 
      cout<<"it is address of pointer 3" << &ptr3<<endl;
      cout<<*(&a)<<endl;// derefrence oprator
      cout<<*(&b)<<endl;// derefrence oprator
      cout<<*(&price)<<endl;// derefrence oprator
      cout<<*(ParPtr)<<endl;







    return 0;
}