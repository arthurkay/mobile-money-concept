#include <iostream>

using namespace std;

// Start with an initial balance of K0
float balance = 0.0;
float *accountBalance = &balance;

// User option
int option; 

void SelectOption(int opt);

void menu() {
    cout << "Welcome to Mobile Money" << endl << endl;
    cout << "1.) Deposit Money " << endl;
    cout << "2.) Withdraw Money " << endl;
    cout << "3.) Send Money " << endl;
    cout << "4.) Check Balance " << endl;
    cin >> option;
    SelectOption(option);
}

// Deposit money into your account
void Deposit() {
    cout << "Enter an amount to deposit into your account" << endl;
    float depositAmount;
    cin >> depositAmount;
    *accountBalance += depositAmount;
    cout << "You have deposited K" << depositAmount << endl;
    cout << "New account balance is K" << balance << endl;
    menu();
}

// Withraw money from account
void Withdraw() {
    cout << "Enter amount to withdraw" << endl;
    float withdrawAmount;
    cin >> withdrawAmount;
    if (withdrawAmount > balance) {
        cout << "You cannot withdraw more than you have in your account" << endl;
        Withdraw();
    } else {
        cout << "You have withdrawn K" << withdrawAmount << endl;
        *accountBalance -= withdrawAmount;
        menu();
    }
}

// Send Money to another number
void SendMoney() {
    cout << "Enter number to send money to" << endl;
}

// Check current balance
float CheckBalance() {
    return balance;
}

void SelectOption(int opt) {
    if (opt == 1) {
        // Call Deposit function
        Deposit();
    } else if (opt == 2) {
        // Call Withdraw function
        Withdraw();
    } else if (opt == 3) {
        // Call send money function
        SendMoney();
    } else if (opt == 4) {
        // Call Check balance option
        cout << "Your account balance is K" << CheckBalance() << endl;
    } else {
        // Call the menu function to display available options
        menu();
    }
}

int main() {
    menu();
    
    try {
        cin >> option;
        SelectOption(option);
    } catch(...) {
        // Only integers are allowed, display options menu
        menu();
    }

    return 0;
}