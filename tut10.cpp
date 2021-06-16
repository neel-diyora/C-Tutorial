#include<iostream>

using namespace std;
int main(){
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;

    //*** selection control structure: switch case statements***
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    
    case 10:
        cout<<"you are 10"<<endl;
        break;

    case 4:
        cout<<"you are 4"<<endl;
        break;

    default:
    cout<<"no special cases"<<endl;
        break;
    }

    cout<<"done with switch case"<<endl;
    return 0;
}