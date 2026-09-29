#include<iostream>
using namespace std;

int main(){

    int arr[10];

    cout<<arr<<endl;    // it returns address 

    char ch[6] = "abcde";

    cout<<ch<<endl;    // it returns character

    char *c = &ch[0];

    cout<<c<<endl;
    cout<<*c<<endl;


    return 0;
}