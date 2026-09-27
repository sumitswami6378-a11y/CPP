#include<iostream>
using namespace std;




void insert(int a[],int n){

    for (int i = 0; i < n; i++)
    {
        cout<<"ENTER THE ELEMENT OF THE ARRAY INDEX "<<i<<"=";
        cin>>a[i];
    }
    
}




void linear_search(int a[], int n, int key){

    // key is the element to be searched

    int count =0;

    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            count ++;
        }

    }

     if(count == 1){

        cout<<"ELEMENT FOUND AT INDEX "<<endl;
     }
     else{

        cout<<"ELEMENT NOT FOUND";
     }
     
    
    
}




void print(int a[], int n){

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    
}

int main(){

    int a[100];
    int n,key;

    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>> n;

    cout<<"ENTER THE ELEMENT TO BE SEARCHED=";
    cin>>key;

    insert(a,n);

    print(a,n);

    linear_search(a,n,key);



      

    return 0;
}