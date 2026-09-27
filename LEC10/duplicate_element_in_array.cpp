#include<iostream>
using namespace std;

int main(){

    int n;
    int a[100];

    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>>n;

    cout<<"INSERTION OF THE ARRAY";
    for (int i = 0; i <n; i++)
    {
        cout<<"ENTER THE ELEMENT OF THE ARRAY INDEX"<<i<<"=";
        cin>>a[i];
    }

    cout<<"print the array=";

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }


    //print duplicate element

    for (int i = 0; i < n; i++)
    {

        int count =0;

        for (int j = i+1; j<n; j++)
        {
            if (a[i] ==a[j])
            {
                count++;
            }
            
        }

        if (count == 1)
        {
            cout<<endl;
            cout<<"duplicate element is="<<a[i];
        }

        
        
    }
    return 0;

}