#include<iostream>
using namespace std;

int sum_of_n(int num){


    int sum =0;

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    
    cout<<"sum ="<<sum<<endl;
}

int main(){

    sum_of_n(3);

    sum_of_n(7);

    sum_of_n(78);

    sum_of_n(54);

    sum_of_n(21);
}