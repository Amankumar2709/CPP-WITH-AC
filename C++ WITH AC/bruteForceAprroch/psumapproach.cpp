#include<iostream>
#include<vector>
#include<limits>

using namespace std;

vector<int> pairsum(vector<int>nums, int target){
    vector<int> ans;
    int n= nums.size();

    int i=0, j= n-1;
    while(i<j){
        int psum = nums[i]+ nums[j];
        if(psum > target){
            j--;
        }else if (psum < target){
            i++;
            }else{
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
    }
    return ans;
} 
int main(){
    vector<int> nums={1,7,9,11,15}; //sorted aaray
    int target = 8;
  
vector<int> ans = pairsum (nums,target);
cout<<"index of target is "<<ans[0]<<","<<ans[1]<<endl;

return 0;
}