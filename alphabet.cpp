//program to check whether a character is an alphabet or not 
#include<iostream>
using namespace std; 
int main(){
    char ch;
    cout<<"Enter the character:"<<endl;
    cin>>ch;
    cout<<ch<<endl;
    //acout<<(int)ch; //typecasting = it tells us the ASCII value of a character 
    //a to z= 97 to 122
    //A to Z = 65 to 90
    int ascii=(int)ch; 
    /*if(ascii>=97 && ascii<=122){
        cout<<"It is a lower case alphabet"<<endl;
    }*/
    if((ascii>=65 && ascii<=90)||(ascii>=97 && ascii<=122)){
        if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u')){
            cout<<"It is a vowel"<<endl;
        }
        else{
            cout<<"It is a consonant"<<endl;
        }
        //cout<<"It is an upper case alphabet"<<endl;
    }
    else{
        cout<<"Not a character"<<endl;
    }
}