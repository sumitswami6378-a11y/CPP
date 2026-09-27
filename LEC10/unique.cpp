#include<iostream>
using namespace std;

void insert(int a[],int n){

    for (int i = 0; i < n; i++)
    {
        cout<<"ENTER THE ELEMENT OF INDEX "<<i<<"=";
        cin>>a[i];
    }
    
}

void print(int a[],int n){


    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
        
    }

}

void unique(int a[],int n){   // unique function


    //int count =0;

    for (int i = 0; i < n; i++)
    {

         int count =0;


        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++ ;
            }
            }

       if (count == 1)
       {
             cout<<endl<<"unique element is="<<a[i];
       }
       
        
        
    }
    
 


}

int main(){

    int n;
    int a[100];

    cout<<"enter the size of array=";
    cin>>n;

    insert(a,n);
    print(a,n);
    unique(a,n);



    return 0;
}