#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"ENTER THE VALUE OF n="<<endl;
    cin>>n;
    
    cout<<"prime numbers"<<endl;

    for (int i = 2; i <= n; i++)
    {
        if (n%i != 0)
        {
            cout<<i<<endl;
        }
    }
}