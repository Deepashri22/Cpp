#include<iostream>
using namespace std;
int main(){
    int side1;
    cout<<"Enter th 1st side:"<<endl;
    cin>>side1; 
    int side2;
    cout<<"Enter 2nd side:"<<endl;
    cin>>side2;
    int side3;
    cout<<"Enter 3rd side: "<<endl;
    cin>>side3;
    if(side1+side2+side3==180){
        cout<<"It is a traingle"<<endl;

    }
    else{
        cout<<"It is not a traingle"<<endl;
    }
}