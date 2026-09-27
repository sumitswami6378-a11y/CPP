#include<iostream>
using namespace std;
int main(){

    // calculator

    int a,b;
    cout<<"ENTER THE VALUE OF a=";
    cin>>a;

    cout<<"ENTER THE VALUE OF b=";
    cin>>b;


    char choice;
    
    cout<<"choice=";
    cin>>choice;

    switch (choice)
    {
    case '+':
        
         cout<<"a+b="<<a+b<<endl;
        break;

    case '-':
        
         cout<<"a-b="<<a-b<<endl;
        break;

    case '*':
        
         cout<<"a*b="<<a*b<<endl;
        break;

    case '/':
        
         cout<<"a/b="<<a/b<<endl;
        break;

    
    default:
        break;
    }
}