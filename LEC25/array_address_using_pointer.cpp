#include<iostream>
using namespace std;

void insert(int arr[],int n){

    for (int i = 0; i < n; i++)
    {
        cout<<"ENTER THE ELEMENTS OF THE index"<<i<<"=";
        cin>>arr[i];
    }
    
}


void address(int arr[],int n){
     cout<<"printing the address of the array"<<endl;

    for (int i = 0; i <n; i++)
    {
        cout<<"ADDRESS OF THE index "<<i<<"="<<arr[i]<<"="<<(arr + i)<<endl;
    }
}



int main(){

    int n;
    int arr[100];
    cout<<"ENTER THE VALUE OF THE n=";
    cin>>n;

   
    
    insert(arr,n);

    address(arr,n);



    return 0;
}