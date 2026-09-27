#include<iostream>
using namespace std;

void array_insert(int a[], int size){


    cout<<"ENTER THE ELEMENTS OF THE ARRAY"<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<"ENTER THE ELEMENT OF INDEX"<<"["<<i<<"]"<<"=";
        cin>> a[i];
    }
    

}


void print_array(int a[], int size){


    cout<<"printing the array=";

    for (int i = 0; i <size; i++)
    {
        cout<<a[i]<<" ";
    }
    

}

int main(){

  int a[100];
  int size;

      cout<<"ENTER THE SIZE OF THE ARRAY=";
      cin>>size;

      array_insert(a,size);
      print_array(a,size);

    return 0;
}