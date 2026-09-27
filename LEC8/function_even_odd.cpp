#include<iostream>
using namespace std;

bool even_odd(int num){

    if (num % 2==0)
    {
        cout<<"num is even"<<endl;
        return 1;
    }
    else{

        cout<<"num is odd"<<endl;
        return 0;
    }
    
}

int main(){

    even_odd(5);

    even_odd(9);

    even_odd(12);

    even_odd(24);


    return 0;

}