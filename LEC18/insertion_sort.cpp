#include<iostream>
using namespace std;

void insert(int a[],int n){

    for (int i = 0; i <n; i++)
    {
        cout<<"ENTER THE ELEMENT OF INDEX "<<i<<"=";
        cin>>a[i];
    }
    
}

void insertion_sort(int a[],int n){


    for (int i = 1; i <n; i++)
    {
        int key =a[i];

        int j = i-1;

        while (j>= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j-- ;
        }
        a[j+1] = key;
        
    }


    for (int i = 0; i <n ; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}


int main(){

    int n;

    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>>n;

    int a[100];

    insert(a,n);

    insertion_sort(a,n);
}