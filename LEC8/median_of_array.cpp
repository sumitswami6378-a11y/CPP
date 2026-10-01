#include<iostream>
using namespace std;

void insert(int arr1[],int arr2[],int m,int n){

    cout<<"ENTER THE ELEMENTS OF THE FIRST ARRAY"<<endl;

    for(int i =0; i<m; i++){

        cout<<"ENTER THE ELEMENTS OF INDEX "<<i<<"="<<endl;
        cin>>arr1[i];
    }

    cout<<"ENTER THE ELEMENTS OF THE SECOND ARRAY"<<endl;

    for(int i =0; i<n; i++){

        cout<<"ENTER THE ELEMENTS OF INDEX "<<i<<"="<<endl;
        cin>>arr2[i];
    }

}

void median(int arr1[],int arr2[],int m,int n,int arr3[]){

    int i=0;
    int j=0;
    int k=0;

    while(i<m && j<n){

        if(arr1[i] < arr2[j]){

            arr3[k++] = arr1[i++];
        }
        else{

            arr3[k++] = arr2[j++];
        }
    }


    while(i < m){

        arr3[k++] = arr1[i++];
    }
    while(j < n){

        arr3[k++] = arr2[j++];
    }


    cout<<"THE MERGED ARRAY IS"<<endl;
    for(int i = 0; i < m + n; i++){
        cout<<arr3[i]<<" ";
    }

    cout<<endl;

    int size = m+n;

    if(size % 2 !=0){

        cout<<"THE MEDIAN OF THE MERGED ARRAY IS = "<<arr3[size/2]<<endl;
    }
    else{

        cout<<"THE MEDIAN OF THE MERGED ARRAY IS = "<<(arr3[size/2] + arr3[size/2 -1])/2.0<<endl;
    }


}

int main(){

   // int arr1[] = {1,2,5};

   // int arr2[] = {3,4,6};

    int arr1[100];
    int arr2[100];

    int m ;
    int n ;

    cout<<"ENTER THE SIZE OF FIRST ARRAY =";
    cin>>m;
    cout<<"ENTER THE SIZE OF SECOND ARRAY=";
    cin>>n;

    int arr3[m+n];

    cout<<"m="<<m<<endl;
    cout<<"n="<<n<<endl;

    insert(arr1,arr2,m,n);

    median(arr1,arr2,m,n,arr3);

    return 0;
}