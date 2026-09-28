#include<iostream>
using namespace std;


int main(){

    int matrix[100][100];
    int row,column;

    cout<<"ENTER ROW=";
    cin>>row;

    cout<<"ENTER COLUMN=";
    cin>>column;

    cout<<"ENTER THE ELEMENTS OF THE MATIX=";

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <column; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    
    cout<<"print the element of the matrix=\n";

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <column; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        
        cout<<endl;
    }


    // rotate by 180 degree
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <column; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
        
        cout<<endl;
    }
    

    // after rotating 180 degree

    
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <column; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        
        cout<<endl;
    }

    



    return 0;

}