#include<iostream>
using namespace std;

int main(){


    // initializing the array
    int row;
    int column;

    int a[10][20];

    cout<<"ENTER ROWS=";
    cin>>row;
    cout<<endl;
    cout<<"ENTER COLUMN=";
    cin>>column;
    cout<<endl;

    // inserting the element 

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <column; j++)
        {
            cin>>a[i][j];
        }
        
    }

    // printing the array

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <column; j++)
        {
            cout<<a[i][j]<<" ";
        }


           cout<<endl;
        
    }

 
    





    return 0;
    
}