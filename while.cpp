#include<iostream> 
using namespace std;
int main(){
    //initialization outside loop
    int i=1;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }
    int a,b;
    cout<<"a"<<a<<endl;//garbage value, when not assigned then computer gives it something
}