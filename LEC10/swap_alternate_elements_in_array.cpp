#include<iostream>
using namespace std;

void insert(int a[], int n){

    for (int i = 0; i < n; i++)
    {
        cout<<"ENTER THE ELEMENT OF INDEX"<<i<<"=";
        cin>>a[i];
    }
    
}

void print(int a[], int n){                  // printing function is declare first before swap because we call that function in the swap function.


    for (int i = 0; i < n; i++)
    {
        
        cout<<a[i]<<" ";
    }
    
}




void swap(int a[],int n){


    int temp;                       // variable for store the data elements

    for (int i = 0; i < n-1; i=i+2)
    {
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }
    
    print(a,n);                          // calling print function

}




int main(){


    int n;
    int a[100];

    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>>n;
    
    insert(a,n);

    swap(a,n);

    return 0;
}