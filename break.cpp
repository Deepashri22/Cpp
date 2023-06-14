#include<iostream>
using namespace std; 
int main(){
    //prime number program 
    cout<<"Enter a number:"<<endl;
    int n;
    cin>>n; 
    bool flag= true; 
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag = false;
            //cout<<"Composite number"<<endl;
            break;
        } 
        
    }
    if(flag==true) cout<<n<<"Is prime"<<endl; 
    else cout<<n<<"Is composite"<<endl;
}