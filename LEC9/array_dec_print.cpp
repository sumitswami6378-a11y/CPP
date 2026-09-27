#include<iostream>
using namespace std;

void array_insert(int a[], int n){

    for (int i = 0; i < n; i++)
    {
        cout<<"ENTER THE ELEMENT of index "<<i<<"=";
        cin>>a[i];
    }
    
}

void array_print(int a[],int n){


    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main(){
    
    int a[100];
    int n;
    cout<<"ENTER THE SIZE OF ARRAY=";
    cin>>n;

    array_insert(a,5);
    array_print(a,5);

    return 0;
}