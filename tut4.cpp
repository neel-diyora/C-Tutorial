#include <iostream>

// this program was created by neel
using namespace std;

int c = 30;

int main()
{
    // *******build in data type********
    int a, b, c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a + b;
    cout<<"the sum is "<<c<<endl;
    cout<<"the globle c is "<<::c<<endl;
    
return 0;
}