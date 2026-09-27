#include<iostream>
using namespace std;

void insert(int a[],int n){

    for (int i = 0; i <n; i++)
    {
        cout<<"ENTER THE ELEMENT OF INDEX"<<i<<"= ";
        cin>>a[i];
    }
    
}

void print(int a[],int n){

    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    
}

//first and last position of the element in the array

void first_last_position(int a[],int n, int x){

    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            if (first == -1)
            {
                first = i;
            }
            

            last = i;
        }
        
    }

    cout<<"first index is ="<<first<<endl;

   

    cout<<"last index is ="<<last;
    
}

int main(){


    int n,x;
    int a[100];

    cout<<"ENTER THE SIZE OF THE ARRAY =";
    cin>>n;

    cout<<"ENTER THE ELEMENT OF OCCURENCE =";
    cin>>x;

    insert(a,n);

    print(a,n);

    first_last_position(a,n,x);
}