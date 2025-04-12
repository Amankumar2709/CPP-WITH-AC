// integer use 4 byte in memory 
// we have 32 bits to store one integer number 
 #include<iostream>
using namespace std;


int main(){

    int age = 25;    
    char GRADE = 'A';
    float PI = 3.14f;   
    bool  ispass = true; // true values translate to one (1)
                        // false values translate to zero(0)

    double rate = 99.99;
     
    cout <<"The age of pradeep is "<< age << endl;
    cout << sizeof(age) <<endl;
    cout << GRADE << endl;
    cout << PI << endl;
    cout << ispass << endl;
    cout << rate << endl;



    char grade ='A';// implicite function OR TYPE CONVERSION (where we can convert small datatype into big datatype)
    int value = grade;
    cout << "The ASCII value of A:" << value<< endl;


    float price = 109.09; // it is explicit fn. OR TYPE CASTING (where we can convert big datatype into small datatype)
    int newprice = (int)price;
    cout << newprice <<endl;
   

    


int Age; //INPUT IN CPP FROM USER
cout << "Enter the age :";
cin>> Age;
cout << "Your Age is :" << Age<<endl;
if (Age <= 16)
cout <<"Login  UnSucessfully"<<endl;
else
cout <<"Login  Sucessfully " <<endl;



// use of ARTHMETIC OPERATOR
int a;
double b;  
cout << "Enter the first number :";
cin >> a;
cout << "Enter the second number:";
cin>> b;


int adding = a+b;
int substact =a-b;
int multiplay =a*b;
double divide = a/b;    




cout <<"The sum of of two number is:" << adding << endl;
cout <<"The Substraction of two number is:" << substact << endl;
cout <<"The multiplication  of two number is:" << multiplay << endl;
cout <<"The divide of two number is:" << divide << endl;

// RELATIONAL OPERATOR IN CPP (<,>,<=,>=,!=) 
 int l=10;
int m=10;
int q=12;

cout<<"they are equal " << (l==m)<< endl;
cout<< (l<m)<< endl;
cout << (l!=m)<< endl;
cout <<(l==q) << endl;
    

    int i=5;
    int z;
    int c=10;
    int d;  

// unary oprator  

    z = ++i; // PRE INCREMENT
    cout << i << endl;
    cout << z << endl;
    
    d= c++; // POST INCREMENT
        cout << c <<"\n" << d << endl;


//    SAME WE CAN FOLLOW FOR A DECREMENT



    return 0;
}   
// END OF THE DAY (03-09-2024)
