// Vincent Do, May 21, 2024
//Addition program
#include <iostream>
#include <unistd.h>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int accountNumber;
    int PIN = 54321;
    int inputPIN;
    int mainScreenSelection;
    double currentDollars = 532;
    double depositAmount;
    int withdrawalSelection;
    int mainScreenRestart = 0;

    cout << "Welcome!\n\nPlease enter your account number: ";

    cin >> accountNumber;

    cout << endl;

    while (inputPIN != PIN) {
        cout << "Enter your PIN: ";
        cin >> inputPIN;
        if (inputPIN != PIN) {
            cout << "This PIN is not correct." << endl;
        }
    }

        while (mainScreenRestart == 0) {
        cout << "\n\n\nMain Menu:\n\t1 - View my balance\n\t2 - Withdraw cash\n\t3 - Deposit funds\n\t4 - Exit\nEnter a choice: ";

        cin >> mainScreenSelection;
        if (mainScreenSelection == 1) {
            cout << "You have $" << currentDollars << "." << endl;
            sleep(3);
        }

        if (mainScreenSelection == 2) {
            cout << "Withdrawal options:\n\t1 - $20\t4 - $100\n\t2 - $40\t5 - $200\n\t3 - $60\t6 - Cancel transaction\nChoose a withdrawal option (1-6): " << endl;
            cin >> withdrawalSelection;
                if (withdrawalSelection == 1) {
                    if (currentDollars >= 20) {
                        currentDollars = currentDollars - 20;
                        mainScreenRestart = 0;
                    }
                }
                if (withdrawalSelection == 2) {
                    if (currentDollars >= 40) {
                        currentDollars = currentDollars - 40;
                        mainScreenRestart = 0;
                    }
                }
                if (withdrawalSelection == 3) {
                    if (currentDollars >= 60) {
                        currentDollars = currentDollars - 60;
                        mainScreenRestart = 0;
                    }
                }
                if (withdrawalSelection == 4) {
                    if (currentDollars >= 100) {
                        currentDollars = currentDollars - 100;
                        mainScreenRestart = 0;
                    }
                }
                if (withdrawalSelection == 5) {
                    if (currentDollars >= 200) {
                        currentDollars = currentDollars - 200;
                        mainScreenRestart = 0;
                    }
                }
                if (withdrawalSelection == 6) {
                    mainScreenRestart = 0;
                }
        }

        if (mainScreenSelection == 3) {
            cin >> depositAmount;
            depositAmount = depositAmount / 100;
            currentDollars = currentDollars + depositAmount;
            cout << "$" << depositAmount << " was deposited into your account." << endl;
            mainScreenRestart = 0;
        }

        if (mainScreenSelection == 4) {
            cout << "Thank you for your patronage.";
            mainScreenRestart = 1;
        }
    }
        
    return 0;
}