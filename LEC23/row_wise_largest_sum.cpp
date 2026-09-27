#include<iostream>
using namespace std;

void insert(int a[][10], int row, int column){

    cout<<"INSERT THE ELEMENTS OF THE ARRAY=";

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>a[i][j];
        }
        
    }

    
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

void largest_row_sum(int a[][10], int row, int column){


    int sum[10] ={0} ;



    for (int i = 0; i <row; i++)
    {
       
        for (int j = 0; j < column; j++)
        {
            sum[i] += a[i][j];
        
        }

        cout<<"sum of row "<<i<<"="<<sum[i]<<endl;
        
    }

     int max = sum[0];

    for (int i = 0; i < row; i++)
    {
       

        if (sum[i] > max)
        {
            max = sum[i];
        }
        
    }
    cout<<"maximum sum of row is ="<<max;

    
    
}

int main(){


    int a[10][10];
    int row;
    cout<<"ENTER THE ROW=";
    cin>>row;
    
    int column;
    cout<<"ENTER THE COLUMN=";
    cin>>column;

    insert(a,row,column);


   largest_row_sum(a,row,column);

    return 0;
}