#include<iostream>
using namespace std;

void insert(int a[],int n){

    for (int i = 0; i <n ; i++)
    {
        cout<<"ENTER THE ELEMENT OF INDEX "<<i<<"=";
        cin>>a[i];
    }
    
}

void print(int a[],int n){

    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    
}

int peek(int a[],int n){                   // finding peak element in the moutain array

    int low =0;
    int high =n-1;


    while (low < high)
    {
        int mid = low + (high - low)/2;

        if (a[mid] < a[mid + 1])        // increasing side
        {
            low = mid + 1;
        }
        else if (a[mid] > a[mid +1])    // decreasing side
        {
            high = mid;
        }

        
    }
    

    return low;
}

int main(){


    int a[100];
    int n;

    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>>n;

    insert(a,n);

    print(a,n);

    cout<<"PEEK ELEMENT "<<a[peek(a,n)];
}