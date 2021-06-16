#include<iostream>
using namespace std;

int main(){
    
    //ARRAY EXAMPLE:
    int marks[4] = {23, 45, 23, 68};
    cout<<"these are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;

    // you can change the value of an array
    marks[2] = 4578;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<endl;


    //---------------
    int mathMarks[4];
    mathMarks[0] = 345643;
    mathMarks[1] = 4564;
    mathMarks[2] = 453;
    mathMarks[3] = 2389;

    cout<<"these are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    cout<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    cout<<endl;
    cout<<"-----------------------"<<endl;

    // Quick quiz: do the same using while and do-while loops ?

    // Pointer and array
    int*p = marks;
    cout<<"the value of *p is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
    cout<<endl;

    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}
