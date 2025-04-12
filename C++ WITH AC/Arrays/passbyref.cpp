#include<iostream>
using namespace std;

int changearray(int arr[],int size){
    cout<<"in function\n";
    for(int i=0;i<size; i++){
        arr[i]=2*arr[i];
    }
}

int main(){
int arr[]={4,6,9,5};

changearray(arr,4);
cout<<"in main\n";
  for(int i=0;i<=3; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
return 0;
}                       


