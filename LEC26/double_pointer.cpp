#include<iostream>
using namespace std;

int main(){

    int value = 5;

    int *p = &value;

    int **p1 = &p;

    cout<<"VALUE OF *P="<<*p<<endl;
     cout<<"VALUE OF *P="<<**p1<<endl;
      cout<<"VALUE OF *P="<<value<<endl;
    

    cout<<"ADDRESS OF THE *P="<<p<<endl;

    cout<<"VALUE OF THE DATA IS="<<*p<<endl;


    cout<<"ADDRESS OF THE &P="<<&p<<endl;

    return 0;
}