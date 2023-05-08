#include<iostream> 
using namespace std;
int main(){
    /*for (int i=0; i<40;i++)
    {
        if(i==2){
            break;
        }
        cout<<i<<endl;
    }*/
    /* continue- break the current iteration and then go back to the previous iteration and execute it*/
    for (int i=0; i<40;i++)
    {
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    } /*skips 2, does not print 2*/
    
    
    return 0;
} 