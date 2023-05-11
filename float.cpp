#include<iostream>
using namespace std;
int main(){
    //operation of integers gives integer
    //operation of float gives float 
    //Dividend= Divisor * Quotient + Remainder
    int a=14; //a= dividend
    int b=3; //b= diisor
    int r; //r= remainder
    int q;   //q= quotient 
    q = a/b;
    //a= (b*q) +r
    //r= a- (b*q)
    //r= a- (b*q);
    r = a%b;
    cout<<r;


}