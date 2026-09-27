#include<iostream>
#include<math.h>
using namespace std;

int main(){

int n;

cout<<"ENTER THE VALUE OF n="<<endl;
cin>>n;
int i=0;

int bits[100];

while (n>0)
{
    bits[i] = n%2;
    n=n/2;
    i++;
}

int j = i-1;
for (int j = i-1; j >=0; j--)
{
    cout<<bits[j];
}

// convert binary into decimal

int decimal =0;

for (int k = 0; k<=j; k++)
{
    decimal = decimal + pow(2,k);
}

cout<<decimal;


}