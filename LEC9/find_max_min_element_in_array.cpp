#include<iostream>
#include<climits>
using namespace std;

void insert(int a[], int n){

    for (int i = 0; i < n; i++)
    {
        cout<<"enter the element of array index "<<i<<"=";
        cin>>a[i];
    }
    
}

void minimum(int a[], int n){

    int min = INT_MAX;
    
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
        
    }

    cout<<"MINIMUM ELEMENT IS = "<< min;
    cout<<endl;
    
}

void maximum(int a[] , int n){


    int max = INT_MIN;

    for (int i = 0; i<n; i++)
    {
        if (a[i] > max)
        {
            max =  a[i];
        }
        
    }

    cout<<"maximum element in the array is= "<< max;
    
}



int main(){

    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>>n;

    int a[100];

    insert(a,n);

    minimum(a,n);

    maximum(a,n);



    return 0;
}