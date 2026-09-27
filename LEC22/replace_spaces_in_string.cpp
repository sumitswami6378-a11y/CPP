#include<iostream>
#include<string>
using namespace std;

int main(){

string name;
cout<<"ENTER YOUR STRING=";
getline(cin,name);

cout<<name<<endl;


cout<<"LENGTH OF THE STRING ="<<name.length()<<endl;


//REPLACE ALL SPACES IN THE STRING BY @40.

string temp ="";

for (int i = 0; i < name.length(); i++)
{
    if (name[i] == ' ')
    {
        temp.push_back('@');
        temp.push_back('4');
        temp.push_back('0');
    }
    else{

        temp.push_back(name[i]);
    }
}

cout<<endl;


cout<<temp;



    return 0;
}
