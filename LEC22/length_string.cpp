#include<iostream>
using namespace std;

int length(char name[]){

    int count =0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count ++;
    }

    return count;
    
}

int main(){

    char name[20];

    cout<<"ENTER YOUR NAME=";
    cin>>name;

    cout<<name<<endl;

    cout<<"LENGTH OF THE STRING IS="<<length(name);


}