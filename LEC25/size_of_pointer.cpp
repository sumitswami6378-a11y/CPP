#include<iostream>
using namespace std;

int main(){

    int temp[10];

    int *ptr = &temp[0];

    cout<<"size of temp[10]="<<sizeof(temp)<<endl;

    cout<<"size of temp[0]="<<sizeof(temp[0])<<endl;

    cout<<"size of ptr="<<sizeof(ptr)<<endl;

    cout<<"size of ptr="<<sizeof(&ptr)<<endl;

    // address obbtaining using ptr
    



    return 0;
}