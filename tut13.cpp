#include<iostream>
using namespace std;

int main(){
    // what is a pointer? ---> data type witch holds the address of otherdata types

    int a=3;
    int* b = &a;
    // & ---> (Address of) operator
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"the value at address of a is "<<*b<<endl;

    // Pointer to pointer 
    int **c = &b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;

    return 0;
}