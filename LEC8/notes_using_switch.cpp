#include<iostream>
using namespace std;

int main(){

    cout<<"ENTER 1 FOR 100 NOTES"<<endl;
    cout<<"ENTER 2 FOR 50 NOTES"<<endl;
    cout<<"ENTER 3 FOR 20 NOTES"<<endl;
    cout<<"ENTER 4 FOR 10 NOTES"<<endl;
    



    int notes;
     
    int amount;
    cout<<"ENTER AMOUNT=";
    cin>>amount;
    
    int choice;
    cout<<"ENTER CHOICE=";
    cin>>choice;
    
    while (1)
    {
    switch (choice)
    {
    case 1:
        notes = amount /100;
        amount = amount%100;

        cout<<"notes="<<notes;
        choice++;
        break;

    case 2:
        notes = amount /50;
        amount = amount%50;
        cout<<"notes="<<notes;
        choice++;
        break;

    case 3: 
        notes = amount /20;
        amount = amount%20;
        cout<<"notes="<<notes;
        choice++;
        break;

    case 4: 
    notes = amount /10;
    amount = amount%10;
    cout<<"notes="<<notes;
    choice++;
    break;

    case 5:

    exit(0);



    default:
        break;
    }
        /* code */
    }
    

    
    

}