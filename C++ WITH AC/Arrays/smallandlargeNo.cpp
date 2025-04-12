#include  <iostream>
#include <climits>
using namespace std ;

int main(){
 int num[]={500,20,40,60,90};   
 int size=4;

 int smallest =INT_MAX; // highest value 
 int largest =INT_MIN;  // lowest value


for(int i=0; i<size;i++){ //initializing the index
    if(num[i] < smallest){ // check for lowest
        smallest =num[i] ;
        // smallest = min(num[i],smallest)
    }

    if(num[i]>largest){ // check for highest
        largest=num[i];
    }
}
   cout<<"The Smallest number in an array is "<<smallest<<endl;
   cout<<"The largest number in an array is "<<largest;

 return 0;
 }