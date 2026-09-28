#include<iostream>
using namespace std;

int call_by_reference(int &x){

    x = 20;



    return x;
}

int main(){

    int a = 10;

    int result = call_by_reference(a);

    cout<<result;

    cout<<endl;

    cout<<a;


    return 0;
}