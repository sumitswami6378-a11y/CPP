#include<iostream>
using namespace std;


int getsum(int *arr,int n){

    int sum =0;

    for (int i = 0; i <n; i++)
    {
         sum += arr[i];
    }

    return sum;
    
}
int main(){

    int n;

    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>>n;

    int *arr = new int[n];

    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    

    int result = getsum(arr,n);

    cout<<"result="<<result<<endl;


    return 0;
}