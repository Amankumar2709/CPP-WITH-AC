#include<iostream>
#include<vector>
using namespace std;

int linearsearch(vector <int> vec, int target ){
    for(int i=0;i<vec.size();i++){
        if(vec[i]==target){
            return i;
        }
    }
    return -1;
}
int main (){

vector<int>numbers={10,20,30,40,50,60,65,70};
int target=50;

int index = linearsearch(numbers, target);

if(index != -1){
cout<<"Element found at index: "<< index<<endl;
}
else{
    cout<<"Element not found. "<<endl;

}
 return 0;
}