#include<iostream>
using namespace std;

// this will not swap a and b.       extra: exchange the value in swap
void swap(int a, int b){ //temp  a  b
    int temp = a;        // 4    4  5
    a = b;               // 4    5  5
    b = temp;            // 4    5  4
}
int main(){
    int x=4, y=5;
    cout<<"the value of x is "<<x<<" and the value of b is "<<y<<endl;
    swap(x, y);//---> this will not swap a and b
    cout<<"the value of x is "<<x<<" and the value of b is "<<y<<endl;
    
    return 0;
}