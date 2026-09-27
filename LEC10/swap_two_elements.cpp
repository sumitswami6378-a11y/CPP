#include <iostream>
#include <algorithm>
using namespace std;


int main(){


    int a,b;

    cout << "ENTER THE VALUE OF a and b = ";
    cin >> a >> b;


    swap(a,b);

    
    cout << "After swap: " << a << " " << b << endl;



    return 0;
}