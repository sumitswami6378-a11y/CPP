#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack <int> st;

    cout<<"size of the stack="<<st.size();
    cout<<endl;

    st.push(5);
    st.push(45);
    st.push(5);
    st.push(21);

    cout<<"top of the stack is"<<st.top();
    cout<<endl;


    cout<<"stack is empty or not ="<<st.empty();
    cout<<endl;


    //pop up the element

    //before pop

    //directly use kr k hum for loop se print nhi krva skte

    for(int i:st){

        cout<<i;
    }

    //pop

    st.pop();
    st.pop();

    //after the poping

    for(int i:st){

        cout<<i;
    }
}