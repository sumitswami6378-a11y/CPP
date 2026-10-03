#include<iostream>
using namespace std;

bool binary_search(int arr[],int s,int end,int key){

    if (s > end)
    {
        return false;
    }
    int mid = s + (end - s)/2;

    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] > key)
    {
        binary_search(arr,s,mid-1,key);
    }
    else{


        binary_search(arr,mid + 1,end,key);
    }
    
    
    
}





int main(){

    int arr[10] = {1,5,7,9,10,14};
    int size =6;

    int end =5;
    int s=0;
    
    int key = 10;

    cout<<"RESULT OF BINARAY SEARCH="<<binary_search(arr,s,end,key)<<endl;
}