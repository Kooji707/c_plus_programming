#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class SavingsAccount {
public: 
    SavingsAccount (float = 0);
    void calculateMonthlyInterest(float);
    void setBalance(float);
    void modifyInterestRate(float);
    static void setAnnualInterestRate(float percent) {
        annualInterestRate = percent;
            cout << "The annual interest rate for this saver is: " << annualInterestRate << endl;
    }

private:
    float savingsBalance;
    static float annualInterestRate;
};

SavingsAccount::SavingsAccount (float savingsBalance) {
    setBalance(savingsBalance); //the default balance is $0
}

void SavingsAccount::setBalance(float dollars) {
    savingsBalance = ( dollars >= 0) ? dollars : 0; //if your account is below 0 dollars, it sets it to 0
    cout << "The balance is: $" << savingsBalance << endl;

}

void SavingsAccount::calculateMonthlyInterest (float annualInterestRate) {
    savingsBalance = savingsBalance + (savingsBalance * ((annualInterestRate/12)/100)); //calculates how much money is added to the account due to monthly interest and adds it to the balance
}

void SavingsAccount::modifyInterestRate(float percent) {
    annualInterestRate = ( percent > 0 ) ? percent : 0; //if you try to make the interest rate smaller than 0, it sets it to 0
    cout << "The annual interest rate for this saver is: " << annualInterestRate << endl;
}

float SavingsAccount::annualInterestRate = 0;

int main () {
    SavingsAccount saver1;
    saver1.setAnnualInterestRate(3);
    saver1.setBalance(2000);

    SavingsAccount saver2;
    saver2.setAnnualInterestRate(4);
    saver2.setBalance(3000);


    return 0;
}