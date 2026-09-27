#include<iostream>
using namespace std;

void insert(int a[],int n){

    //insert elements in the array

    for (int i = 0; i < n; i++)
    {
        cout<<"ENTER THE ARRAY ELEMENT OF INDEX "<<i<<"=";
        cin>>a[i];
    }

}

// function binary search

void binary(int a[], int n, int key){

    int low =0;
    int high =n-1;

    while (low <= high)
   {
       int mid = low + (high -low)/2;

       if (key == a[mid])
       {
          cout<<"ELEMENT FOUND AT INDEX"<<mid;
          return;
       }

       else if (key >a[mid])
       {
          low = mid + 1;
       }

       else if(key < a[mid]){

        high = mid -1;
       }

       else{

        cout<<"ELEMENT IS NOT FOUND";
       }
       
       
        
    }
    
}

int main(){


    int n;
    int a[100];

    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>>n;

    insert(a,n);

    int key;

    cout<<"enter the key element to be searched=";
    cin>>key;

    binary(a,n,key);




    return 0;
}