#include<iostream>
using namespace std;

int sqrt(int num){                // sqrt of a number

    int low = 0;
    int high = num;


    while (low<=high)
    {
        int mid = low + (high - low)/2;

        if (mid * mid == num)
        {
            return mid;
        }
        else if (mid * mid > num)
        {
            high = mid -1;
        }
        else{

            low = mid +1;
        }
        
        
    }

    
    
}

int main(){

    
int num;

cout<<"ENTER THE NUM=";
cin>>num;

int ans =sqrt(num);

cout<<"ANSWER IS ="<<ans;




    return 0;
}