#include<iostream>
using namespace std;

 struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
};

int main(){
     struct employee neel;
     
     neel.eId = 1;
     neel.favChar = 'c';
     neel.salary = 120000000;
     cout<<"the value is "<<neel.eId<<"."<<endl;
     cout<<"the value is "<<neel.favChar<<"."<<endl;
     cout<<"the value is "<<neel.salary<<"."<<endl;
    
    return 0;
}