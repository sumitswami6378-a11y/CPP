#include<iostream>
using namespace std;

void fibonacci(int n){
    int a =0;
    int b=1;

    int next;

    cout<<a;
    cout<<b;

    for (int i = 1; i < n; i++)
    {
        next = a+b;
         
        cout<<next;
        a =b;
        b=next;
    }

}

int main(){

    int n;
    cout<<"ENTER THE VALUE OF n=";
    cin>>n;

    fibonacci(n);

    return 0;
}