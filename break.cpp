#include<iostream>
using namespace std; 
int main(){
    //prime number program 
    cout<<"Enter a number:"<<endl;
    int n;
    cin>>n; 
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<"Composite number"<<endl;
            break;
        } 
        else{
            cout<<"Not a composite number"<<endl;
            break;
        }
    }
}