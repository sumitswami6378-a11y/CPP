#include<iostream>
#include<utility>
using namespace std;


void reverse(char string[],int n){

    int start =0;
    int end = n-1;

    while (start < end)
    {
     swap(string[start++], string[end--]);
    
    }

    
    cout<<string;
    
    
}

int getlength(char string[]){

    int count =0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        count ++;
        
    }

    return count;
    
}

int main(){


    char string[10];
    cout<<"ENTER YOUR NAME=";
    cin>>string;

    cout<<string<<endl;

    int n = getlength(string);

    cout<<"length="<<n<<endl;


    reverse(string,n);



    return 0;
}