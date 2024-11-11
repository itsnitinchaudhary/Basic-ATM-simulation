#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; // Initial balance
    int choice;
    double amount;

    do {
        cout << "\n*** ATM Menu ***\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
            
            switch (choice) {
            case 1: 
                cout << "Your current balance is: $" << balance << endl;
                break;
            case 2: 
                cout << "Enter amount to deposit: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful! New balance is: $" << balance << endl;
                } else {
                    cout << "Invalid deposit amount.\n";
                }
                break;
            case 3: 
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful! New balance is: $" << balance << endl;
                } else if (amount > balance) {
                    cout << "Insufficient balance for this withdrawal.\n";
                } else {
                    cout << "Invalid withdrawal amount.\n";
                }
                break;
            case 4: 
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4); 

    return 0;
}
