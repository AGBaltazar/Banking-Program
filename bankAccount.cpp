#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

class bankAccount {
    public:
        string accountName, accountType;
        double accountBalance, accountInterest, depositAmount, withdrawAmount;
        int accountNumber;

    //Function will get user input and add it to the set variables to later be accessed
    void openAccount(){
        cout << "\nEnter Account Number:   ", cin >> accountNumber;
        cout << "\nEnter Your Name:  ", cin >> accountName;
        cout << "\nWould this be a Checkings or Savings Account:  ", cin >> accountType;
        cout << "\nEnter the Initial Balance:  ", cin >> accountBalance;
        cout << "\nEnter Current Interest Rate:  ", cin >> accountInterest;
        cout << "\n";
    }

    void viewAccount(){
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Name: " << accountName;
        cout << "\nAccount Type: " << accountType;
        cout << "\nAccount Balance: " << accountBalance;
        cout << "\nAccount Interest: %" << accountInterest;
        cout << "\n";
    }

    void depositMoney(){
        cout << "\nAmount being deposited: ", cin >> depositAmount;
        accountBalance = depositAmount + accountBalance;
    }

    void withdrawMoney(){
        cout << "\nAmount being withdrawn: ", cin >> withdrawAmount;
        if (withdrawAmount <= accountBalance){
            accountBalance = withdrawAmount - accountBalance;
        }
        else{
            cout << "\nInsufficient Funds\n";
        }
        
    }

};

int main() {
    char choice;
     
    bankAccount bankAcc;

    do
    {
        cout << "\n Please select the following options ";
        cout << "\n      1: Open Account";
        cout << "\n      2: View Account";
        cout << "\n      3: Deposit Money";
        cout << "\n      4: Withdraw Money";
        cout << "\n      5: Exit \n\n";

        cin >> choice;

        switch (choice)
        {
        case '1':
            bankAcc.openAccount();
            break;

        case '2':
            bankAcc.viewAccount();
            break;
        
        case '3':
            bankAcc.depositMoney();
            break;

        case '4':
            bankAcc.withdrawMoney();
            break;

        case '5':
            break;

        }
    
    } while (choice > 5);
}
