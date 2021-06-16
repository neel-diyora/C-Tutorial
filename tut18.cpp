#include<iostream>
using namespace std;

// enum in c++: 
int main(){
    enum Meal{ breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<endl;

    Meal m1 = lunch;
    cout<<m1<<endl;
    cout<<endl;

    cout<<(m1==1)<<endl;
    cout<<(m1==2)<<endl;


    return 0;
}