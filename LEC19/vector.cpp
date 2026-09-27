#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<int> v;                                          //vector
 
    cout<<"capacity="<<v.capacity()<<endl;                  //number of assign sizes
    cout<<"size="<<v.size()<<endl;                          // noumber of element present

    v.push_back(2);

    
    cout<<"capacity="<<v.capacity()<<endl;
    cout<<"size="<<v.size()<<endl;

    v.push_back(4);

    
    cout<<"capacity="<<v.capacity()<<endl;
    cout<<"size="<<v.size()<<endl;

    v.push_back(8);

    
    cout<<"capacity="<<v.capacity()<<endl;
    cout<<"size="<<v.size()<<endl;

    v.push_back(12);
    
    cout<<"capacity="<<v.capacity()<<endl;
    cout<<"size="<<v.size()<<endl;

    v.push_back(45);                                     //capacity = 8
                                                         //size =5
    
    cout<<"capacity="<<v.capacity()<<endl;
    cout<<"size="<<v.size()<<endl;

    //print the elements

    for(int i:v){

        cout<<i<<" ";
    }

    //pop up the top element

    v.pop_back();
     
     cout<<endl;

     cout<<"remove the element"<<endl;
     

    for(int i:v){
        
        
        cout<<i<<" ";
    }
   

    // first element


    cout<<"front element is="<<v.front()<<endl;

    //last element 
    cout<<"last element is="<<v.back()<<endl;

    // specific index element

    cout<<"element at index 2="<<v.at(2)<<endl;


    v.clear();  // clear the vector
    
    cout<<"capacity="<<v.capacity()<<endl;     //  capacity is not zero
    cout<<"size="<<v.size()<<endl;




}