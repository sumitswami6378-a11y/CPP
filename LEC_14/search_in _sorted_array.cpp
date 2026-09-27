#include<iostream>
using namespace std;

void insert(int a[],int n){

    for (int i = 0; i <n; i++)
    {
        cout<<"ENTER THE ELEMENT OF INDEX"<<i<<"=";
        cin>>a[i];
    }
    
}


// SEARCH IN ROTATED ARRAY
 
int search(int a[],int n,int x){

    int low =0;
    int high = n-1;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if (x == a[mid])
        {
             return mid;
        }

        else if ( a[low] <= a[mid])
        {
            /* code */
               if (x >= a[low] && x < a[mid])
            {
                 high = mid -1;
            }
            else{

                low = mid + 1;
            }
        }

        else{

            if (x > a[mid] && x <= a[high])
            {
                low = mid + 1;
            }
            else{

                high = mid -1;
            }
            
        }

    }

return -1;
    
}


int main(){

    int a[100];
    int n;

    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>>n;

    insert(a,n);

    search(a,n,1);


    return 0;
}