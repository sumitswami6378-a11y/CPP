#include<iostream>
using namespace std;



void sum(int a[][20],int row,int column){

    //finding row wise sum

    

    for (int i = 0; i < row; i++)
    {

        int sum = 0;

        for (int j = 0; j <column; j++)
        {
            sum += a[i][j];
        }
        
        cout<<"sum ="<<sum<<endl;
    }
    
}

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


    sum(a,row,column);
 
    





    return 0;
    
}