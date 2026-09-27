#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    int bits[100];
    int i=0;

    cout<<"ENTER THE n="<<endl;
    cin>>n;

    while (n>0)
    {
        bits[i] = n%2;
        n = n/2;
        i++;
    }

    for (int j = i-1; j>=0; j--)
    {
        

        

        if (bits[j] == 1)
        {
            bits[j] = 0;
        }

        else{

            bits[j] = 1;
        }

        
        cout<<bits[j];
        
    }
    int decimal =0;

    for (int k = 0; k < i; k++)
    {
        decimal = decimal + bits[k] * pow(2,k);
    }

    cout<<endl<<decimal;
    

    
    
    
}