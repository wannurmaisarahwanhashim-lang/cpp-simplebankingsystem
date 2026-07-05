#include "bank.h"         // Include header file
#include <iostream>       // Include input-output library
using namespace std;

int main() {
    double balance;       // Variable to store account balance
    char choice;          // Variable to store user choice
    
    // Ask user for initial deposit
    cout << "Welcome to the Simple Banking System!" << endl;
    cout << "Enter initial deposit amount: $";
    cin >> balance;
    
    // Loop to provide menu options until user decides to exit
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "Enter your choice: ";
        
        int option;         // Variable to store user-selected menu option
        cin >> option;
        
        // Perform action based on user selection
        switch (option) {
            case 1:
                deposit(balance);         // Call deposit function
                break;
            case 2:
                withdraw(balance);        // Call withdraw function
                break;
            case 3:
                checkBalance(balance);    // Call check balance function
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        
        // Ask user if they want to continue or exit
        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;
        
    } while (choice != 'n');        // Loop continues until user enters 'n'
    
     // Exit message
    cout << "Thank you for using the Simple Banking System!" << endl;
    return 0;
}
