#include<iostream>
using namespace std;

int main(){

    int n1;
    int n2;

    cout<<"ENTER THE VALUE OF n1=";
    cin>>n1;
    
    cout<<"ENTER THE  VALUE OF n2=";
    cin>>n2;


    int arr1[100];
    int arr2[100];

    for (int i = 0; i <n1; i++)
    {
        cout<<"enter element of index "<<i<<"=";
        cin>>arr1[i];
    }
    
    
    for (int i = 0; i <n2; i++)
    {
        cout<<"enter element of index "<<i<<"=";
        cin>>arr2[i];
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j< n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout<<arr1[i]<<endl;
                break;
            }
            
        }
        
    }
    
    
}