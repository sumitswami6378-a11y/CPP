#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void arr_one(int arr1[], int size1){

    for (int i = 0; i < size1; i++)
    {
        cout << "ENTER ELEMENT OF INDEX " << i << " = ";
        cin >> arr1[i];
    }
}

void arr_two(int arr2[], int size2){

    for (int i = 0; i < size2; i++)
    {
        cout << "ENTER ELEMENT OF INDEX " << i << " = ";
        cin >> arr2[i];
    }
}

vector<int> reverseArray(vector<int> ans){

    reverse(ans.begin(), ans.end());

    return ans;
}

vector<int> sum_array(int arr1[], int arr2[], int size1, int size2){

    vector<int> ans;

    int i = size1 - 1;
    int j = size2 - 1;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);

        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = arr1[i] + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);

        i--;
    }

    while (j >= 0)
    {
        int sum = arr2[j] + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);

        j--;
    }

    while (carry != 0)
    {
        int sum = carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);
    }

    return reverseArray(ans);
}

int main(){

    int size1, size2;

    cout << "SIZE1 = ";
    cin >> size1;

    cout << "SIZE2 = ";
    cin >> size2;

    int arr1[100];
    int arr2[100];

    arr_one(arr1, size1);
    arr_two(arr2, size2);

    vector<int> result = sum_array(arr1, arr2, size1, size2);

    cout << "AFTER ADDING = ";

    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}