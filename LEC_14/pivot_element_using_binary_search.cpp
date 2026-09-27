#include<iostream>
using namespace std;

void insert(int a[],int n){


    for (int i = 0; i <n ; i++)
    {
        cout<<"ENTER THE ELEMENT OF INDEX "<<i<<" ";
        cin>>a[i];
    }
    
}

int get_pivot(int a[],int n){

    int low =0;
    int high = n-1;

    while (low < high)
    {

        int mid = low + (high - low)/2;
        if (a[mid] >= a[0])
        {
            low = mid + 1;
            
        }
        else{

            high = mid;
        }
        
    }

    return low;
    

}

int main(){


    int n;
    cout<<"ENTER THE VALUE OF n=";
    cin>>n;

    int a[100];
    insert(a,n);;

   cout<<"PIVOT ELEMENT IS FOUND BY USING BINARY SEARCH IS="<<a[get_pivot(a,n)];

   return 0;
}