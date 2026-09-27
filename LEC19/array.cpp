#include<iostream>
#include<array>
using namespace std;

int main(){


    array <int,5> arr ={1,2,3,4,5};

    int size = arr.size();                                       // array size


    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    

    cout<<"first element is "<<arr.front()<<endl;                    // first element
    cout<<"last element is "<<arr.back()<<endl;                       //last element
    cout<<"array is empty or not "<<arr.empty()<<endl;               // empty or not
    cout<<"array element of 2 index is  "<<arr.at(2)<<endl;           //specific data


    return 0;

}