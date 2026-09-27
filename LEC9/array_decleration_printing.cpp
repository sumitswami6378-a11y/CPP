#include<iostream>
using namespace std;

int main(){

    int arr[100];
    int size;

    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"ENTER THE ELEMENT OF THE ARRAY INDEX "<<i<<"="<<endl;
        cin>>arr[i];
    }
    
    cout<<"PRINTING THE ARRAY ELEMENTS=";

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" " ;
    }


    return 0;
    
}