#include <iostream>

// this program was created by neel
using namespace std;
int main()
{
    //*********float, double, long double literals***********

    float d=34.4f;//(F or f)
    long double e=34.4l;//(L or l)
    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;

    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl; 
    cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl; 
    cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl; 
    cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl; 

    //********reference variables************

    float x = 299;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

     //********typecasting************

     int a = 45;
     float b = 45.46;
     cout<<"the value of a is "<<(float)a<<endl;
     cout<<"the value of b is "<<float(b)<<endl;

     cout<<"the value of b is "<<(int)b<<endl;
     cout<<"the value of b is "<<int(b)<<endl;
     cout<<endl;
     cout<<"the expression is "<<a + b<<endl;
     cout<<"the expression is "<<a + int(b)<<endl;
     cout<<"the expression is "<<a + (int)b<<endl;

    return 0;
}