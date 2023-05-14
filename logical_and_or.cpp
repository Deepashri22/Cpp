#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter a number:"<<endl;
    // cin>> n;
    /*if(n>=100 && n<+999){
        cout<<"It is a 3 digit number:"<<endl;
    }
    else{
        cout<<"Not a 3 digit number"<<endl;
    }*/

    /*if(n%5==0 && n%3==0){
        cout<<"The number is divisible by 5 and 3"<<endl;
    }

    else{
        cout<<"The number is not divisible by 5 and 3"<<endl;
    }*/

    /*if(n%5==0 || n%3==0){
        cout<<"The number is divisible by 5 or 3"<<endl;
    }

    else{
        cout<<"The number is not divisible by 5 or 3"<<endl;
    }*/
    int x,y,z;
    cout<<"Enter first integer:"<<endl;
    cin>>x;
    cout<<"Enter second integer:"<<endl;
    cin>>y;
    cout<<"Enter third integer:"<<endl;
    cin>>z;
    if(x>y){
        if(x>z){
            cout<<"The greatest number is:"<<x<<endl;
        }
    }
    if(y>z){
        if(y>x){
            cout<<"The greatest number is:"<<y<<endl;
        }
    }
    if(z>y){
        if(z>x){
            cout<<"The greatest number is:"<<z<<endl;
        }
    }
    else{
        cout<<"Invalid integer"<<endl;
    }
    return 0; 
}