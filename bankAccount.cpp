#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

class bankAccount {
    public:
        string accountName;
        string accountType;
        double accountBalance, accountInterest;
        int accountNumber;

    void openAccount(){
        cout << "\nEnter Account Number:   ", cin >> accountNumber;
        cout << "\nEnter Your Name:  ", cin >> accountName;
        cout << "\nWould this be a Checkings or Savings Account  ", cin >> accountType;
        cout << "\nEnter the Initial Balance:  ", cin >> accountBalance;
        cout << "\nEnter Current Interest Rate:  ", cin >> accountInterest;
    }
};

int main() {
    char choice;
     
    bankAccount bankAcc;

    do
    {
        cout << "\n Please select the following options ";
        cout << "\n 1:Open Account";
        cout << "\n 2: Exit \n";

        cin >> choice;

        switch (choice)
        {
        case '1':
            bankAcc.openAccount();
            break;
        
        case '2':
            break;

        }
    
    } while (choice !=2);
}
