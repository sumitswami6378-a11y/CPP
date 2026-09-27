#include<iostream>
using namespace std;

void ap(int n){

    int ap = 3*n + 7;

    cout<<ap;

}

int main(){

    int n;
    cout<<"ENTER VALUE OF n=";
    cin>>n;

    ap(n);

    return 0;
}