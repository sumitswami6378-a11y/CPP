#include<iostream>
using namespace std;

int length(char string[]) {

    int count = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        count++;
    }

    return count;
}

void palindrome(char string[], int n) {

    int s = 0;
    int end = n - 1;

    char original[20];

    // Original string ko copy karna
    for (int i = 0; i < n; i++) {
        original[i] = string[i];
    }

    // String ko reverse karna
    while (s < end) {
        swap(string[s++], string[end--]);
    }

    cout << "REVERSE STRING = " << string << endl;

    // Check palindrome
    bool ispalindrome = true;

    for (int i = 0; i < n; i++) {

        if (original[i] != string[i]) {
            ispalindrome = false;
            break;
        }
    }

    if (ispalindrome) {
        cout << "PALINDROME";
    }
    else {
        cout << "NOT PALINDROME";
    }
}

int main() {

    char string[20];

    cout << "ENTER THE STRING = ";
    cin >> string;

    cout << "ORIGINAL STRING = " << string << endl;

    int n = length(string);

    cout << "LENGTH OF THE STRING = " << n << endl;

    palindrome(string, n);

    return 0;
}