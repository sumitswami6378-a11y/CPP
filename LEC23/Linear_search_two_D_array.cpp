#include<iostream>
using namespace std;

void insert (int arr1[][20], int row, int column){

    

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            cin>>arr1[i][j];
            
        }
        
    }

    
}

bool linear_search(int arr1[][20],int row, int column, int target){


    bool found = false;
     

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            if (arr1[i][j] == target)
            {
                found = true;
            }


            
            
        }
        
    }

    if (found == true)
    {
        cout<<"ELEMENT IS FOUND";
    }
    else{

        cout<<"ELEMENT IS NOT FOUND";
    }

}
int main(){


    int row;
    int column;

    cout<<"ENTER ROW=";
    cin>>row;
    
    cout<<endl;
    cout<<"ENTER COLUMN=";
    cin>>column;

    int arr1[10][20];

    insert(arr1,row,column);

    int target;

    cout<<"ENTER THE TARGET ELEMENT=";
    cin>>target;
    
    linear_search(arr1,row,column,target);

    return 0;
}