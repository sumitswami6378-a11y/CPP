#include<iostream>
using namespace std;

inline int sqaure(int &x){

    return x*x;
}

int main(){


    int n;
    

    cout<<"ENTER THE VALUE OF n=";
    cin>>n;

    cout<<"sqaure ="<<sqaure(n)<<endl;


    return 0;
}