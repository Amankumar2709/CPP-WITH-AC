#include<iostream>
using namespace std;

int linearsearch(int arr[], int sz, int target  ){
    for(int i=0; i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]= {2,3,5,7,9,13};
    int sz= 7;
    int target =5;

    cout<<linearsearch(arr,sz,target)<<endl;
    return 0;
}