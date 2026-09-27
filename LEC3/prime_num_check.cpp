#include<iostream>
using namespace std;
int main(){
    int num;
    int count = 0;

    cout<<"ENTER THE VALUE OF NUM="<<endl;
    cin>>num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count =1;
            break;
        }
        
        
    }


if (count == 0)
{
    cout<<num<<" is prime"<<endl;

}
else{

    cout<<num<<"is not prime"<<endl;
}

    
}