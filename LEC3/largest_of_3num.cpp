#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;

    cout<<"ENTER THE VALUE OF num1"<<endl;
    cin>>num1;

    cout<<"ENTER THE VALUE OF num2"<<endl;
    cin>>num2;

    cout<<"ENTER THE VALUE OF num3"<<endl;
    cin>>num3;

    if(num1 > num2 && num1 > num3){

        cout<<num1<<" is greater"<<endl;
    }

    else if (num2 > num1 && num2 > num3)
    {
        cout<<num2<<" is greater"<<endl;
    }

    else{

        cout<<num3<<" is greater"<<endl;
    }
    
}