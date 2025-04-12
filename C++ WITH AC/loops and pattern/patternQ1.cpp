
// ****loop inside a loop is called nested loop****
// A nested loop is a (inner) loop that appears in the loop body of another (outer) loop



#include<iostream>
using namespace std;
int main(){

int n=4;
for(int l=0; l<n; l++){
  int m=4;
  for(int p=0; p<m; p++ ){
    cout<<" * ";
  }

  cout<<endl;
}


    return 0;
}