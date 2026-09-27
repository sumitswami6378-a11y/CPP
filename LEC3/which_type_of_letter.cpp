#include<iostream>
using namespace std;

int main(){

    char ch;

    cout<<"ENTER THE CHARACTER="<<endl;
    cin>>ch;

    if(ch>='a' && ch<='z'){

        cout<<"lowercase"<<endl;
    }
    else if (ch >= '0' & ch<='9')
    {
        cout<<"NUMBER"<<endl;
    }
    else if(ch >= 'A' & ch<='Z'){
        cout<<"UPPERCASE"<<endl;
    }
    else{

        cout<<"CHARACTER IS SYMBOL"<<endl;
    }
    
}