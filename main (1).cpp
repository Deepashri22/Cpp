#include<iostream> 
using namespace std;
int main(){
    /*loops hai bhai loop*/
    /* syntax of for loop: 
    for(initialization(initial point to begin from); condition; updation)
    {
        loop body(c++ code);
    }*/
    
    /*for (int i=0; i<4; i++)
    {
        cout<<i<<endl;
        i++;
    }*/
    
    /* While loop syntax: 
    while(condition)
    {
        statements;
    }*/ 
    
    /*int i=10;
    while(i<=40)
    {
        cout<<i<<endl;
        i++;
    }*/
    
    /*do while loop syntax
    do 
    {
        statements;
    }while(condition);
    */ 
    //do while loop works once before checking the condition and then checks the condition in the second iteration 
    /*int i=10;
    do
    {
        cout<<i<<endl;
        i++;
    }while(i<=40);*/
    
    int i=6;
    do 
    {
        cout<<i<<endl;
        i=i+6;
    
    }while(i<=60);
    
    
    return 0;
} 