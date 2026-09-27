#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"ENTER THE NUMBER"<<endl;
    cin>>n;

    while (n%2 == 0)
    {
        n = n/2;
    }
    
    if (n == 1)
    {
        cout<<"true";
    }
    else{

        cout<<"false";
    }
    
}