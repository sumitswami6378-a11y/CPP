// pivot element is the element that is smallest element

#include<iostream>
using namespace std;

void insert(int a[],int n){


    for (int i = 0; i <n; i++)
    {
        cout<<"ENTER THE ELEMENT OF INDEX "<<i<<"=";
        cin>>a[i];
    }
    
}

int pivot_linear_search(int a[],int n){                                      //IN THE LINEAR SEARCH TIME COMPLEXITY IS 0(N).
   
     int min = a[0];


    for (int i = 0; i <n; i++)
    {

       

        if (a[i] < min)
        {
            min = a[i];
            
        }
        
    }
    

return min;

}

int main(){

    int n;
    int a[100];
    cout<<"ENTER THE SIZE OF THE ARRAY=";
    cin>>n;

    insert(a,n);

    cout<<"pivot element using binary search="<<pivot_linear_search(a,n);


}