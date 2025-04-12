#include<iostream>
using namespace std;
int main(){


    // GRADING SYSTEM OF MARKS USING IF,ELSE IF , ELSE STATEMENT



    int marks;
    cout<<"ENTER YOUR MARKS: ";
    cin>>marks;

    if(marks>=90){
        cout<<"YOU ACHEVIED A+ GRADE\n";
    }
        else if(marks>=80 && marks<90){        //we can write no of times else if but if and else can only written by once
             cout<<"YOU ACHEVIED A GRADE\n";
        }
          else if(marks>=70 && marks<80){
             cout<<"YOU ACHEVIED B+ GRADE\n";
        }
          else if(marks>=60 && marks<70){
             cout<<"YOU ACHEVIED B GRADE\n";
             }
             else if(marks>=50 && marks<60){
             cout<<"YOU ACHEVIED C+ GRADE\n";
             }
             else if(marks>=40 && marks<50){
             cout<<"YOU ACHEVIED C GRADE\n";
             }else{
             cout<<"YOU ACHEVIED D GRADE\n";
             }
    
// FIND THE CHARACTER IS UPPERCAS EOR LOWERCASE

char ch;
cout<<"Enter Character: ";
cin>>ch;
if(ch>='a'&& ch<='z'){
    cout<<"The Character is in lowercase\n";
}
else if(ch>=0 && ch<=100000000000000){
    cout<<"INVALID\n";
}
else
cout<<"the charcter is in uppercase\n";
    return 0;
}