#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 20; i++)
    {
        /* code */
        cout<<i<<endl;
        if(i==10){
            break;
        }
    }
    cout<<endl;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }
    
    
    return 0;
}
