#include<iostream>
using namespace std;

bool issorted(int arr[],int size){

    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else{

        bool remainingpart = issorted(arr + 1, size - 1);

        return remainingpart;
    }
    
    


}

int main(){

    int arr[100] = {1,6,7,8,3,10,1,45};
    int size;    

    cout<<"ENTER THE SIZE =";
    cin>>size;

    bool ans = issorted(arr,size);

    if (ans)
    {
        cout<<"ARRAY IS SORTED"<<endl;
    }
    else{

        cout<<"ARRAY IS NOT SORTED"<<endl;;
    }
    
    return 0;
}