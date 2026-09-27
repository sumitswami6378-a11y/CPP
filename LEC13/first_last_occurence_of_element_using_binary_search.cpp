#include<iostream>
using namespace std;

void insert(int a[],int n){


    for (int i = 0; i <n; i++)
    {
        cout<<"ENTER ELEMENT OF INDEX "<<i<<"=";
        cin>>a[i];
    }
    
}

void print(int a[],int n){

    cout<<"print the array elements=";

    for (int i = 0; i <n ; i++)
    {
        cout<<a[i]<<endl;
    }
    
    
}

int first_occurence(int a[],int n, int key){

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
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else{

            high = mid - 1;
        }
        
        
    }

    return ans;
    
}


int last_occurence(int a[],int n, int key){

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
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else{

            high = mid - 1;
        }
        
        
    }

    return ans;
    
}


int main(){

    int n;
    int a[100];

    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>>n;


    insert(a,n);
    print(a,n);

    int key;
    cout<<"ENTER THE KEY ELEMENT=";
    cin>>key;

    cout<<"FIRST OCCURENCE OF THE ELEMENT="<<first_occurence(a,n,key)<<endl;

    cout<<"LAST OCCURENCE OF THE ELEMENT="<<last_occurence(a,n,key);              //TOTAL NUMBER OF OCCURENCE IS = (LAST INDEX - FIRST INDEX) + 1




    return 0;
}

