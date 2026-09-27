#include<iostream>
using namespace std;

void insert(int a[],int n){

    for (int i = 0; i <n; i++)
    {
        cout<<"ENTER THE ELEMENT OF INDEX "<<i<<" ";
        cin>>a[i];
    }
    
}

int main(){

    int n;
    int a[100];

    cout<<"ENTER THE SIZE OF ARRAY= ";
    cin>>n;

    insert(a,n);

    int temp;

    // moves zeroes at end in the array

    
    int i =0;
        while (i < n-1){

            if (a[i] == 0 && a[i+1] !=0)
            {
            
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;


            i++ ;
        }
        else{

            i++;
        }
        }
        
        
    


    for (int i = 0; i<n; i++)
    {
        
        cout<<a[i]<<" ";
    }
    
    



    return 0;
}
