#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int next;
    int n;

    cout<<"ENTER THE VALUE OF n="<<endl;
    cin>>n;
    
    cout<<a<<" ";
    cout<<b<<" ";

    for (int i = 0; i <=n; i++)
    {   
       
       next = a+b;
       cout<<next<<" ";
       a=b;
       b=next; 
    }
    
}