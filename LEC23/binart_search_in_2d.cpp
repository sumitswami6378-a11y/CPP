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


    // binary search in the 2d matrix [0][1][2][3][4][5][6][7][8][9]  stores like this

    int start =0 ;
    int end = row*column -1;

    int target;
    cout<<"ENTER THE TARGET ELEMENT=";
    cin>>target;
    

    while (start <= end)
    {
        int mid = start + (end - start)/2;

        int element = matrix[mid/column][mid%column];

        if (element == target)
        {
            cout<<element<<" FOUND"<<endl;
        }

        if (element < target)
        {
            start = mid + 1;
            
        }
        else{

            end = mid - 1;
        }
        
        
    }
    

    

    return 0;
}