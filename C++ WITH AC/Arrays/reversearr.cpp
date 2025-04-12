#include<iostream>
using namespace std;

int reversearr(int arr[],int sz){
    int start=0;  int end=sz-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
        }
}
int main(){

int arr[]={2,4,6,8,9,7,3};
int sz=7;

reversearr(arr,sz);

for(int i=0;i<sz; i++){
    cout<<arr[i]<<" ";

}
cout<<endl;
}