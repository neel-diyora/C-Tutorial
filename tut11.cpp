#include<iostream>

using namespace std;
int main(){
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. while loop
        3. do-while loop
        */

       //*** 1. For loop : ***

       /* Syntax for For loop :
      -----> for(initialization; condition; updation)
       {
           loop body(C++ code);
       } */
       cout<<"Printing 1 to 20 using For loop: "<<endl;
       for (int i = 1; i < 60; i++)
       {
           /* code */
           i+=5;
           cout<<i<<endl;
       }
       cout<<endl;

//Example of infinite for loop:
       //for (int i = 1; 35 <= 40; i++)
       //{
       //    cout<<i<<endl;
       //}


         //*** 2. while loop in C++: ***

       /* Syntax:
       while(condition)
       {
           C++ statements;
       }*/
       
       cout<<"printimg 1 to 15 using while loop"<<endl;
       int I = 1;
       while(I<=15){
           cout<<I<<endl;
           I++;
       }
       cout<<endl;

// Example of infinite while loop:
    // int = 1;
    // while (true)
    //{
    //cout<<i<<endl;
    //i++;
    //}

/* do while loop in C++*/
     //syntax:
     //do
     //{
     //     C++ statements;
     //}while(condition);

     cout<<"printing 1 to 10 using while loop"<<endl;
     int j = 1;
     do{
         cout<<j<<endl;
         j++;
       }while(j<=10);

    return 0;
}