#include<iostream>
using namespace std;

int main(){
    int num;
    int rem;
    int count =0;

    cout<<"ENTER NUMBER="<<endl;
    cin>>num;

    while (num >0)
    {
         rem = num % 2;
    
    if (rem==1){
      
      count ++;
    }
        num = num/2; 
    }
    cout<<"bits="<<count<<endl;
    
    
}