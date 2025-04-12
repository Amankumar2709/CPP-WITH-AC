#include<iostream>
using namespace std;


int main(){ 


//  WHILE LOOP EXAMPLE

  int i=1;
  
  while(i<=20){
    cout<< i <<" " ;
    i++;
  }
  cout <<endl;
 
//  FOR LOOP EXAMPLE
 int l;
 cout<<"Enter the number:";
 cin>>l;
for(int j=1; j<=l;j++){

  if(j==6){  //USE OF BREAK KEYWORD
    break;
  }
    cout<<"The number is: " <<j << " "  <<endl;
}

// CALCULATE THE SUM OF NUMBER FROM 1 TO N 

int z;
int sum = 0;
cout<<"Enter the number whose sum you want: ";
cin>>z;

for(int d=1 ; d<=z; d++){    // for sum of even no. (if(z%2 ==0))
    sum +=d;
}
    cout << "The sum that number is: " << sum  <<endl;


    

  return 0;
}

