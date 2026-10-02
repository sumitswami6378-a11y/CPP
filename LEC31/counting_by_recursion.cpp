#include<iostream>
using namespace std;
int counting(int n){
    
    if (n==0)
    {
        return 1;
    }

    cout<<n<<endl;

    counting(n-1);
    
}
int main(){


    int n;
    cout<<"ENTER THE VALUE OF n=";
    cin>>n;

    counting(n);

}