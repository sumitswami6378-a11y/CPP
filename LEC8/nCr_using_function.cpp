#include<iostream>
using namespace std;

int factorial(int n){

    int fact =1;

    for(int i=1; i<=n; i++){

        fact = fact*i;
    }
   return fact;
}


int nCr(int n,int r){

    int num = factorial(n);

    int denom = ((factorial(r))*(factorial(n-r)));

    int nCr = num/denom;

    cout<<nCr<<endl;
}

int main(){

    nCr(8,2);

    nCr(13,0);

    nCr(160,10);
}