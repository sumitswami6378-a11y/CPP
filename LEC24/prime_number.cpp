#include<iostream>
using namespace std;

bool prime(int n){

    for (int i = 2; i <n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        
        
    }
    return true;
}

int main(){

    int n;
    cout<<"ENTER THE VALUE OF n=";
    cin>>n;

    
    if(prime(n))
    {
        cout << n << " is PRIME";
    }
    else
    {
        cout << n << " is NOT PRIME";
    }


    return 0;
}