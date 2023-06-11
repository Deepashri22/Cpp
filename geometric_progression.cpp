#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of terms you want:";
    int n;
    cin>>n; 
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl; 
        a=a*2;
    }
}