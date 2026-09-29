#include<iostream>
using namespace std;

int main(){


    int arr[10] = {0};

    // arr holds the address of the first array block
    cout<<arr[0]<<endl;
    cout<<"ADDRESS OF THE arr[0] is="<<arr<<endl;



    // it also obtain by using address operator
    cout<<"ADDRESS OF THE arr[0]="<<&arr<<endl;



    // ADDRESS OF THE 1 INDEX
    cout<<"ADDRESS OF THE arr[1] is="<<(arr + 1)<<endl;



    // ADDRESS OF THE 2 INDEX
    cout<<"ADDRESS OF THE arr[2] is ="<<(arr + 2)<<endl;



     // ADDRESS OF THE 3 INDEX
    cout<<"ADDRESS OF THE arr[3] is ="<<(arr + 3)<<endl;


    // so formula is obtain arr[i] = *(arr + i)

    



    return 0;

}