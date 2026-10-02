#include<iostream>
using namespace std;

int power(int n){

    if(n==0){

        return 1;
    }

    int pow = 2*power(n-1);

    return pow;
}
int main(){

    int n;
    cout<<"ENTER THE VALUE OF n="<<endl;
    cin>>n;

    int result=power(n);

    cout<<result<<endl;

    return 0;
}