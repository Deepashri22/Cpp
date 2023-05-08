/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Sequence Structure: work sequentially for completing actions 
//Selection Structure: checks a condition and then executes according to it. (True/False
//Loop Structure: if/else loops 
#include<iostream> 
using namespace std;
int main(){
    int age;
    cout<<"Age:";
    cin>>age;
    //if ((age<18) && (age>0)){
       // cout<<"you cannot come to my party"<<endl;
        
    //}
    //else if (age==18){
        //cout<<"you will get kid pass"<<endl;
    //}
    //else{
        //cout<<"you can come to the party"<<endl;
    //}
    //return 0;
//}

switch(age)
{
case 18:
    cout<<"you are 18"<<endl;
    break;
case 22:
    cout<<"you are 22"<<endl;
    break;
case 2:
    cout<<"you are 2"<<endl;
    break;
    
default:
    cout<<"no special cases"<<endl;
    break;
}

return 0;
}
 

