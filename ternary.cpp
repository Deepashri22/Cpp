#include<iostream>
using namespace std;
int main(){
    //condition? true(this gets executed):false(this gets executed)
    cout<<"Enter marks:"<<endl;
    int marks;
    cin>>marks;
    (marks>33)?cout<<"pass":cout<<"fail";
}