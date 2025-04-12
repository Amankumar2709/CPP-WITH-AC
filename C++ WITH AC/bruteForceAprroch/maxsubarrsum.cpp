#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    int n=7;
    int arr[]={3,-4,5,4,-1,7,-8}; //max sum will be 9.
    int maxSum =INT_MIN;  

    for(int start=0; start<n;start++){
        int currentSum =0;
        for(int end=start; end<n; end++){
            currentSum +=arr[end];
            maxSum=max(currentSum,maxSum);
        }
    }
    cout<<"Max subarray sum = "<<maxSum<<endl;

    return 0;
    } 