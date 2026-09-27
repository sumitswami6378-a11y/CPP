#include<iostream>
using namespace std;

int factorial(int num){

    int fact =1;

    for (int i = 1; i <= num; i++)
    {
        fact = fact*i;
    }
    
   cout<<"factorial ="<<fact<<endl;

}

int main(){

    factorial(5);

    factorial(16);

    factorial(4);

    factorial(12);
}