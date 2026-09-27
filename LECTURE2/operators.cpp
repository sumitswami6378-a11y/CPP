#include<iostream>
using namespace std;

int main(){

    int a = 7;
    int b = 17;
    float c = 14.25;

    int add = a+b;
    cout<< "add="<<add<<endl;

    float sub = a-c;
    cout<<"sub="<<sub<<endl;

    float mul = a*c;
    cout<<"mul="<<mul<<endl;

    int div = a/c;
    cout<<"division="<<div<<endl;

    
    float divv = a/c;
    cout<<"division="<<divv<<endl;


    cout<< (a>b)<<endl;

    cout<< (a<b)<<endl;

    cout<< (a>=b)<<endl;

    cout<< (a<=b)<<endl;


    cout<<(a^b)<<endl;
    cout<<(a&b)<<endl;


}