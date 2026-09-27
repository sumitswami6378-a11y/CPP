#include<iostream>
using namespace std;

int power(int num1,int num2){
    
    int ans= 1;

    for (int i = 1; i <=num2; i++)
    {
        ans = ans*num1;
    }

    cout<<"power of "<< num1 <<" and "<< num2 <<" is ="<<ans<<endl;
    
}

int main(){

    power(5,4);

    power(7,8);

    power(2,10);
}