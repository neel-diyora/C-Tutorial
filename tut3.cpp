#include <iostream>

// this program was created by neel
using namespace std;
int main()
{
    int a=4, b=5;
    cout<<"operators in c++:"<<endl;
    cout<<"following are the type of operatares in c++"<<endl;
    // Arithmetic operators
    cout<<"the value of a + b is "<<a+b<<endl;
    cout<<"the value of a - b is "<<a-b<<endl;
    cout<<"the value of a * b is "<<a*b<<endl;
    cout<<"the value of a / b is "<<a/b<<endl;
    cout<<"the value of a % b is "<<a%b<<endl;
    cout<<"the value of a++ is "<<a++<<endl;
    cout<<"the value of a-- is "<<a--<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of --a is "<<--a<<endl;
    cout<<endl;

    // Assigment operators --> used to assign value to variables
    // int a=3, b=6;
    // char d='d'

// Comparison operators
cout<<"Following are the comparison operators in c++"<<endl;
cout<<"the value of a == b is "<<(a==b)<<endl;
cout<<"the value of a != b is "<<(a!=b)<<endl;
cout<<"the value of a >= b is "<<(a>=b)<<endl;
cout<<"the value of a <= b is "<<(a<=b)<<endl;
cout<<"the value of a > b is "<<(a>b)<<endl;
cout<<"the value of a < b is "<<(a<b)<<endl;
cout<<endl;


// Lodical operators
cout<<"Following are the Logical operators in c++"<<endl;
cout<<"the value of this logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
cout<<"the value of this logical or operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
cout<<"the value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;

    return 0;
}