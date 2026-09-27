#include<iostream>
using namespace std;

void unique(int a[],int n){

    int ans=0;

    for (int i = 0; i < n; i++)
    {
        ans = ans^a[i];
    }
    
    cout<<"unique="<<ans;
}

void insert(int a[],int n){

    for (int i = 0; i < n; i++)
    {
        cout<<"ENTER ELEMENTS OF THE ARRAY INDEX "<<i<<"=";
        cin>>a[i];
    }
    
}

int main(){

    int n;

    cout<<"ENTER SIZE OF ARRAY=";
    cin>>n;

    int a[100];

    insert(a,n);
    unique(a,n);

    


    return 0;
}