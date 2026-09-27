#include<iostream>
using namespace std;

void insert(int a[], int n){

    for (int i = 0; i <n; i++)
    {
        cout<<"ENTER THE ELEMENTS OF INDEX "<<i<<" ";
        cin>>a[i];
    }
    
}

void bubblesort(int a[],int n){

    int temp;

    for (int i = 0; i<n ; i++)
    {
        for (int j = 0; j<n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }


    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}

int main(){

    int n;
    int a[100];

    
    cout<<"ENTER THE size of the array= ";
    cin>>n;

    insert(a,n);

    bubblesort(a,n);
}