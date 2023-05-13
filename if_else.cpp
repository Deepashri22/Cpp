#include<iostream>
using namespace std;
int main(){
    /*int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"The number is even"<<endl;
    }
    else{
        cout<<"The number is odd"<<endl;
    }
    return 0;*/

    /*int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if(n%5==0){
        cout<<"The number is divisible by 5"<<endl;
    }
    else{
        cout<<"The number is not divisible by 5"<<endl;
    }
    return 0;*/

    /*int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if(n>0){
        cout<<"Absolute value is:"<<n<<endl;
    }
    else{
        cout<<"Absolute value is:"<<(-n)<<endl;
    }
    return 0;*/

    float cp,sp;
    cout<<"Enter cost price:"<<endl;
    cin>>cp;
    cout<<"Enter selling price:"<<endl;
    cin>>sp;
    float profit;
    profit =(sp-cp);
    float loss;
    loss= (cp-sp);
    if(sp>cp){
        cout<<"You have made a profit of:"<<profit<<endl;
    }
    else{
        cout<<"You have made a loss of:"<<loss<<endl;
    }
    return 0;
    


}