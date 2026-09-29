#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"ENTER value of n="<<endl;
    cin>>n;

    int arr[10];

    for (int i = 0; i <n; i++)
    {
        cout<<"ENTER ELEMENT OF INDEX="<<i<<"=";
        cin>>arr[i];
    }
    
    int *ptr = &arr[0];

    for (int i = 0; i <n; i++)
    {
        cout<<"ADDRESS OF THE ARR INDEX "<<i<<"=";
        cout<<ptr<<" "<<endl;
        ptr = ptr + 1;
    }
    


    

  

    return 0;
}