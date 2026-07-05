#include "bank.h"         // Include the header file
#include <iostream>       // Include input-output library
using namespace std;

// Function to handle deposit transactions
void deposit(double &balance) {
    double amount;
    cout << "Enter deposit amount: $";
    cin >> amount;
    // Ensure deposit amount is positive
    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful! Your new balance is: $" << balance << endl;
    } else {
        cout << "Invalid deposit amount." << endl;
    }
}

// Function to handle withdrawal transactions
void withdraw(double &balance) {
    double amount;
    cout << "Enter withdrawal amount: $";
    cin >> amount;
    // Check if withdrawal amount is valid and within balance
    if (amount > 0 && amount <= balance) {
        balance -= amount;        // Deduct amount from balance
        cout << "Withdrawal successful! Your new balance is: $" << balance << endl;
    } else {
        cout << "Invalid withdrawal amount or insufficient balance." << endl;
    }
}

// Function to display current account balance
void checkBalance(const double &balance) {
    cout << "Your current balance is: $" << balance << endl;
}
