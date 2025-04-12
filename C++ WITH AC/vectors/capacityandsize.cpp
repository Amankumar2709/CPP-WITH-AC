#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int>marks;

marks.push_back(90);
marks.push_back(80);
marks.push_back(33);
marks.push_back(75);
marks.push_back(22);

cout<<marks.size()<<endl;// size (5)
cout<<marks.capacity()<<endl; // capicity (8)

for(int showMarks : marks){
    cout<<showMarks<<" ";
}
return 0;
}