#include<iostream>
using namespace std;

void set_bits(int a,int b){

    int count1 = 0;
    int count2= 0;
    int count ;

    while (a>0)
    {
        if ((a&1) == 1){
        count1++;
        
    }
    a=a>>1;
    }
    

    while (b>0)
    {
         if ((b&1) == 1) {
        count2++;
           
        }
        b=b>>1;
    }
    


    count = count1 + count2;
    
    cout<<count;
}

int main(){
    int a;
    int b;

    cout<<"ENTER THE VALUE OF a=";
    cin>>a;

    cout<<"ENTER THE VALUE OF b=";
    cin>>b;

    set_bits(a,b);

    return 0;
}