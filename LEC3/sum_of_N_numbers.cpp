#include<iostream>
using namespace std;
int main(){

    int n;
    int i =1;

    cout<<"ENTER THE VALUE OF n="<<endl;
    cin>>n;

    int sum = 0;

    while (i<=n)
    {
        sum = sum + i;
        i = i+1;
    }
    
    cout<<"sum is ="<<sum<<endl;

}