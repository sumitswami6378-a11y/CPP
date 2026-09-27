#include<iostream>
#include<list>
using namespace std;

int main(){

    list <int> l;

    cout<<"size of list="<<l.size();

    //pushing the element

    l.push_back(5);
    l.push_front(9);
    l.push_front(89);
    l.push_back(78);
    l.push_front(5);

    cout<<endl;

    cout<<"size of the list="<<l.size();


    for(int i:l){

        cout<<i<<" ";
    }

    //poping the element

    l.pop_back();
    l.pop_front();

    for(int i:l){

        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"size of the list="<<l.size();

}