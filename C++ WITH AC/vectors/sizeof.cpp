#include<iostream>
#include<vector>

using namespace std;

int main(){
vector<int> vec={2,4,5,6,7};
cout<<"size is: "<< vec.size()<<endl;
vec.push_back(25);// value added in the vec
vec.push_back(15);
vec.push_back(50);
vec.push_back(10);

cout<<"after pushBack the size is: "<< vec.size()<<endl;

vec.pop_back();

for(int arr : vec){ // print all the element in the vector
    cout<<arr<<endl;
}
return 0;
}