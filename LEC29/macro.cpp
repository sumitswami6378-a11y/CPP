#include<iostream>
using namespace std;

#define pi 3.14

int main(){
     
    int radius;

    cout<<"ENTER THE RADIUS OF THE CIRCLE=";
    cin>>radius;

    int area = pi*radius*radius;

    cout<<"AREA OF THE CIRCLE IS ="<<area<<endl;


    return 0;
}