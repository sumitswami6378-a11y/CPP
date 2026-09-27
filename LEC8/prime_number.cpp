#include<iostream>
using namespace std;

int prime_number(int num){

   for (int i = 2; i < num; i++)
   {
       if (num % i == 0)
       {
        cout<<" not prime number"<<endl;
        return 0;
       }
       
   }

   cout<<"prime number"<<endl;
   return 1;
   
}


int main(){



    int n;

    cout<<"ENTER THE VALUE OF n="<<endl;
    cin>>n;

    prime_number(n);


    return 0;

}