#include<iostream>
using namespace std;

void update(int &n){

 n = n+1;

}

int main(){


    int i =5;;

    int &j = i;

    cout<<"BEFORE"<<endl;
    cout<<i<<endl;
    cout<<j<<endl;

    update(i);               // passing the reference using reference variable work at same memory location no creation of anotheer memory

    cout<<"AFTER"<<endl;
    cout<<i<<endl;
    cout<<j<<endl;

    return 0;
}