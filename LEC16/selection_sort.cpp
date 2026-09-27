#include<iostream>
using namespace std;

void insert(int a[],int n){


    for (int i = 0; i <n; i++)
    {
        cout<<"ENTER THE ELEMENT OF INDEX "<<i<<"=";
        cin>>a[i];
    }
    
}

void selection_sort(int a[],int n){

    int temp;

    for (int i = 0; i <n ; i++)
    {
        for (int j = i+1; j <n ; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                
            }
            
        }
        
    }

    for (int i = 0; i <n; i++)
    {
        cout<<a[i];
        
    }
    
    
}

int main(){

    int n;
    int a[100];

    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>>n;

    insert(a,n);

    selection_sort(a,n);
}

