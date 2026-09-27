#include<iostream>
using namespace std;

int main(){


    int a = 0;
    int b = 1;
    int n;
    int next;
    cout<<"ENTER THE VALUE OF n =";
    cin>>n;

    cout<<" "<<a;
    cout<<" "<< b;

    for (int i = 1; i < n; i++)
    {
        next = a+b;

        a=b;
        b=next;
        cout<<" "<<next;

    }
    

    
    return 0;
}