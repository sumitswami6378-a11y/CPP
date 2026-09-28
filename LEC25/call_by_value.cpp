#include<iostream>
using namespace std;

int add(int x){

    x =20;

    

    return x;
}

int main(){

    int a;
    cout<<"ENTER THE VALUE OF a=";
    cin>>a;

    add(a);

    int result = add(a);

    cout << "Result = " << result << endl;
    cout << "Value of a = " << a << endl;



    return 0;
}