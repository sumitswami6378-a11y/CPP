#include<iostream>
using namespace std;

#define size 5

int main(){

    int arr[size];

    cout<<"ENTER THE ELEMENTS OF THE ARRAY "<<endl;

    for (int i = 0; i <size; i++)
    {
        cout<<"ENTER THE ELEMENTS OF THE INDEX "<<i<<"=";
        cin>>arr[i];
    }

    for (int i = 0; i <size; i++)
    {
     
        cout<<arr[i]<<" ";
    }

    return 0;
}