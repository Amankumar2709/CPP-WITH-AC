#include<iostream>
using namespace std;
int main(){
 
 int marks [5]= {10,20,30,40,50}; //[] size of a array
int size =5;
cout<< sizeof(marks) / sizeof(int)<<endl; // Shows no. of bits and size of array


cout<<marks[1]<<endl; // index of array if we try to do print the value at index 5 then it will show garbage value.

// loops: 0 to size -1
for (int i = 0; i<size;i++){
    cout<<marks[i]<<endl;

}




return 0;
}
