#include<iostream>
using namespace std;

int getsum(int arr[],int size){


    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    else{

        int remainingpart = getsum(arr +1,size-1);

        int sum = arr[0] + remainingpart;

        return sum;
    }
    
}

int main(){


    int arr[10] = {1,4,5,6,9,10,13};

    int size = 7;

    cout<<"SUM OF THE ARRAY ELMENTS="<<getsum(arr,size)<<endl;


    return 0;
}