#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    return(n>0) && ((n & (n-1))==0);
}
int main(){
    int numbers;
    cout<<"Enter a number: ";
    cin>>numbers;

    if(isPowerOfTwo(numbers)){
        cout<<numbers<<"is a power of two. "<<endl;
    }else{
        cout<<numbers<<"is not a power of two. "<<endl;

    }
    return 0;
}