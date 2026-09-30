#include<iostream>
using namespace std;

void update(int n){

    n = n+1;
}

int main(){

    int i =5;

    int &j = i;  // reference variable

cout<<"BEFORE"<<endl;

cout<<i<<endl;

update(i);         // yha value ki copy bn rhi h

cout<<"AFTER"<<endl;

cout<<i<<endl;

    return 0;
}