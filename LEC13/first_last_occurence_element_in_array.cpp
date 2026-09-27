#include<iostream>
using namespace std;

void insert(int a[],int n){
    for(int i=0; i<n; i++){

        cout<<"ENTER THE ELEMENT OF THE INDEX IS "<<i<<"=";
        cin>>a[i]; 
    }
}





int firstOcc(int a[],int n,int key){

    int low =0;
    int high = n-1;
    int ans =-1;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if (a[mid] == key)
        {
            ans = mid;
            high = mid -1;
            
        }
        else if(a[mid] < key){

            low = mid + 1;

        }
        else if(a[mid] > key){
           high = mid -1;
        }
        
    }
    
    return ans;
}


int lastOcc(int a[],int n,int key){

    int low =0;
    int high = n-1;
    int ans =-1;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if (a[mid] == key)
        {
            ans = mid;
            low = mid +1;
            
        }
        else if(a[mid] < key){

            low = mid + 1;

        }
        else if(a[mid] > key){
           high = mid -1;
        }
        
    }
    
    return ans;
}

int main(){


    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>>n;

    int key;
    cout<<"ENTER THE KEY ELEMENT=";
    cin>>key;

    int a[100];

    insert(a,n);

    cout<<"FIRST OCCURENCE OF THE ELEMENT IS="<<firstOcc(a,n,key)<<endl;
    
    cout<<"LAST OCCURENCE OF THE ELEMENT IS ="<<lastOcc(a,n,key)<<endl;
}

