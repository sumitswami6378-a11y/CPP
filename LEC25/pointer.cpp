#include<iostream>
using namespace std;

int main(){


    int num =5;
    int *ptr = &num;

    cout<<"VALUE OF PTR="<<ptr<<endl;
    cout<<"VALUE AT *PTR="<<*ptr<<endl;

    char ch = 'a';
    char *ptr1 = &ch;

    cout<<"VALUE OF PTR1="<<ptr1<<endl;
    cout<<"VALUE AT *PTR1="<<*ptr1<<endl;

    double d = 5.256;
    double *ptr2 = &d;

    
    cout<<"VALUE OF PTR2="<<ptr2<<endl;
    cout<<"VALUE AT *PTR2="<<*ptr2<<endl;


return 0;
}