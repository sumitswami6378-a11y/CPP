#include<iostream>
using namespace std;

int main(){

    int i =5;

    int &j = i;  // reference variable

    cout<<i<<endl;
    cout<<j<<endl;

    cout<<"AFTER INCREMENT OF i++"<<endl;

    i++;
    cout<<i<<endl;
    cout<<j<<endl;

    cout<<"AFTER INCREMENT OF j++"<<endl;

    j++;

    cout<<i<<endl;
    cout<<j<<endl;

    return 0;
}