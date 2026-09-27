#include<iostream>
using namespace std;

void insert_array(int a[], int n){

    for (int i = 0; i < n; i++)
    {
        cout<<"ENTER THE ELEMENT OF THE INDEX "<<i<<"=";
        cin>>a[i];
    }


    
}

void print(int a[], int n){


    cout<<"printing in the function =";

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

void update(int a[], int n){

    a[0] = 50;
    a[1] = 12;

    for (int i = 0; i <n; i++)
    {
        cout<<a[i];
    }
    
}


int main(){

int n;
cout<<"ENTER THE SIZE OF THE ARRAY=";
cin>>n;

int a[n];

insert_array(a,n);

    cout<<"printing in the array in main function =";
    

    for (int i = 0; i < n; i++)
    {
        
        cout<<a[i];
    }


update(a,n);

cout<<"PRINT THE ARRAY IN PRINT FUNCTION";

print(a,n);


    
    return 0;
}