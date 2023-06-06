#include<iostream> 
using namespace std;
int main(){
    /*cout<<"Enter an integer";
    int n;
    cin>>n; 
    if(n%5==0 && n%3==0){
        cout<<"The number is divisible by 5 and 3"<<endl;

    }
    else{
        cout<<"Number not divisible";
    }*/ 
    /*cout<<"Enter a integer";
    int n;
    cin>>n; 
    if(n%5==0 || n%3==0){
        cout<<"The number is divisible by 5 or 3"<<endl;

    }
    else{
        cout<<"Number not divisible";
    }*/
    //if condition 1 is false, it wont check condition 2 in && 
    //if any one of the condition is true it is executed in || (or) 

    //greatest of 3

    cout<<"Give 3 integer inputs:"<<endl;
    int num1,num2,num3; 
    cin>>num1;
    cin>>num2;
    cin>>num3; 
    if(num1>num2){
        if(num1>num3){
            cout<<"the greatest number is:"<< num1<<endl; 
        }
    }
    if(num2>num3){
        if(num2>num1){
            cout<<"The greatest number is:"<< num2<<endl;
        }
    }
    if(num3>num2){
        if(num3>num1){
            cout<<"The greatest number is:"<< num3<<endl;
        }
    }
    else{
        cout<<"Error!!";
    }
}