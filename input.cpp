#include<iostream>
using namespace std; 
int main(){
    
    // cout<<"enter a number to square:"<<endl;
    // cin>>x;
    // y = x*x;
    // cout<<"square is:"<<y;
    // cout<<"Enter the radius:"<<endl;
    // cin>>x;
    // float pi = 3.14;
    // float radius;
    // radius = pi* x* x;
    // cout<<"area is:"<<radius;

    // cout<<"Number 1:"<<endl;
    // cin>>x;
    // cout<<"Number 2:"<<endl; 
    // cin>>y;
    // cout<<x+y;
    // return 0;

    float p,r,t;
    cout<<"Enter Principle:"<<endl;
    cin>>p;
    cout<<"Enter rate of interest:"<<endl;
    cin>>r;
    cout<<"Enter time:"<<endl;
    cin>>t;
    cout<<"Simple interest is:"<<(p*r*t)/100;
    return 0;
}