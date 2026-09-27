#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque <int> d;     // create dequeue

    // size of the deque

    cout<<"SIZE OF THE DEQUEUE="<<d.size()<<endl;

    //insertion at back
    d.push_back(5);


    //insertion at front
    d.push_front(7);
    d.push_front(10);
    d.push_front(64);
    d.push_front(36);
    d.push_front(23);

    for(int i:d){
        
        cout<<i<<" ";
    }

    //first element in the deque

    cout<<"first element is ="<<d.front()<<endl;

    //last element in the deque

    cout<<"last element in the deque="<<d.back()<<endl;


    // pop the element in both sides front and back both

    d.pop_back();

    for(int i:d){

        cout<<i<<" ";
        cout<<endl;
    }


    d.pop_front();


    for(int i:d){

        cout<<i<<" ";
    }

      




}