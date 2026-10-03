#include<iostream>
using namespace std;


void linear_search(int arr[],int size,int key){

    if (size == 0)
    {
        cout<<"NOT FOUND"<<endl;
        return;
    }
    if (arr[0] == key)
    {
        cout<<"FOUND"<<endl;
    }
    else{

        linear_search(arr + 1,size-1,key );

    }
    
    

}




int main(){


    int arr[10] = {1,5,6,1,2,12,45};
    int size = 7;

    int key;

    key = 5;

    linear_search(arr,size,key);
}