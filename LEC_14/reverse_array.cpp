#include<iostream>
using namespace std;

void insert(int a[],int n){

    for (int i = 0; i <n; i++)
    {
        cout<<"ENTER THE ELEMENT OF INDEX "<<i<<"=";
        cin>>a[i];
    }
    
}

void reverse_array(int a[],int n){

    int low =0;
    int high = n-1;
    int temp;
  // reverse the array
    while (low < high)
    {
        temp = a[high];
        a[high] = a[low];
        a[low] = temp;

        low ++ ;
        high --;
        
    }

    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main(){

    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY= ";
    cin>>n;

    int a[100];

    insert(a,n);

    reverse_array(a,n);
}