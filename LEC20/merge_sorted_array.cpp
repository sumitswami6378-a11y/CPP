#include<iostream>
using namespace std;

void arr_one(int arr1[],int n){
    
    for (int i = 0; i <n; i++)
    {
        cout<<"ENTER ELEMENTS OF ARR1 OF INDEX"<<i<<"=";
        cin>>arr1[i];
    }
    
}



void arr_two(int arr2[],int m){

    
    
    for (int i = 0; i <m; i++)
    {
        
        cin>>arr2[i];
    }
    
}


void merge(int arr1[],int arr2[], int arr3[],int o,int n, int m){
   
    int i =0;
    int j=0;
    int k =0;

    while (i < n && j < m)
    {
        if(arr1[i] < arr2[j]){

            arr3[k++] = arr1[i++];
        }
        else{

            arr3[k++] = arr2[j++];
        }

        
        
    }

    
        while(i<n)
        {
            arr3[k++] = arr1[i++];
        }
        while(j<m)
        {
            arr3[k++] = arr2[j++];
        }


    for (int i = 0; i<o; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
}



int main(){

    int n,m;

    cout << "ENTER SIZE OF ARR1 ";
    cin>>n;
    cout << endl;

    cout << "ENTER SIZE OF ARR2=";
    cin>>m;
    cout << endl;
    
    int arr1[100];

    arr_one(arr1,n);

    int arr2[100];
    arr_two(arr2,m);

    int o = n+m;

    int arr3[100];

    merge(arr1,arr2,arr3,o,n,m);

    


    return 0;
}
