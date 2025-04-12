#include<iostream>
#include<vector> // library(STL)
using namespace std;

int main (){
    vector<int>vec;
    vector<int>vec1={1,4,3,6,9};
    vector<int>vec2(3,2);// 3 is size of vector & 2 is index value 
 vector<char>alphabets={'a','b','c','d','e'};


    cout<<vec1[1]<<endl;
    cout<<vec2[0]<<endl;
    cout<<vec2[1]<<endl;
    cout<<vec2[2]<<endl;
    cout<<vec2[3]<<endl;// garbage value
    cout<<"size="<<vec2.size()<<endl;//size of vector
    cout<<alphabets[2]<<endl;
    cout<<vec1.capacity()<<endl;
    cout<<vec1.size()<<endl;

    return 0;
}