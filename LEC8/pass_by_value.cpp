#include<iostream>
using namespace std;

void pass_by_value(int n){

    n = n+2;

    cout<<n;
}

int main(){

    int n;
    cout<<"ENTER THE VALUE OF n =";
    cin>>n;

    cout<<n<<endl;         // not using increment
  
    pass_by_value(n);      // by using increment 

    

    return 0;

}