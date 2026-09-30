#include<iostream>
using namespace std;

#define min(a,b) ((a<b)? (a):(b))

int main(){

    int a;
    cout<<"ENTER THE VALUE OF a=";
    cin>>a;

    int b;
    cout<<"ENTER THE VALUE OF b=";
    cin>>b;

    int result = min(a,b);

    cout<<"RESULT ="<<result;



    return 0;
}