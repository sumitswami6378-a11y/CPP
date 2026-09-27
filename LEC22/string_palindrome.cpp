#include<iostream>
using namespace std;

int length(char string[]){

    int count =0;

    for (int i = 0; string[i] != '\0'; i++)
    {
       count ++;
    }

    return count;
    
}

bool palindrome(char string[],int n){

    int s =0;
    int end = n -1;

    while (s<end)
    {
        if (string[s] != string[end])
        {
            return -1;
        }
        else{

            s++;
            end--;
        }


        
    }

return 1;
    
}


int main(){


    char string[100];
    cout<<"ENTER STRING=";
    cin>>string;

    cout<<string<<endl;

   int n = length(string);

   cout<<"STRING IS PALINDROME OR NOT ="<<palindrome(string,n);


   return 0;

}