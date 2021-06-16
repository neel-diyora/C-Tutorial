#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    //****Manipulators in c++*****

    int a=3, b=46, c=4836;
    cout<<"the value of a without setw is: "<<a<<endl;
    cout<<"the value of b without setw is: "<<b<<endl;
    cout<<"the value of c without setw is: "<<c<<endl;

    cout<<"the value of a is: "<<setw(4)<<a<<endl;
    cout<<"the value of b is: "<<setw(4)<<b<<endl;
    cout<<"the value of c is: "<<setw(4)<<c<<endl;
    cout<<endl;

    //*****Operator Precedence******

    int A=3, B=4;
    //int C = (A*5)+B
    int C = ((((A*5)+B)-45)+87); //----> en.cppreference.com
    cout<<C<<endl;


    return 0;
}