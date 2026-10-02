#include<iostream>
using namespace std;

void home(int source, int distination){

    cout<<"SOURCE "<<source<<"<= DISTINATION="<<distination<<endl;
    if (source == distination)
    {
        cout<<"PAHUCH GYA GHR PR"<<endl;

        return;
    }

    home(++source,distination);
    
}

int main(){

    int source =1;
    int distination =10;

    home(source,distination);

    return 0;
}