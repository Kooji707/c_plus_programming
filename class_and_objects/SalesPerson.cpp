//Member functions for calss SalesPerson.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "SalesPerson.h"

const char* months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

SalesPerson::SalesPerson() {
    for ( int i = 0; i < 12; i++)
        sales[i] = 0.0;
}

void SalesPerson::getSalesFromUser() {
    double salesFigure;

    for ( int i = 0; i <= 11 ; i++ ) {
        cout << "Enter sales amount for " << months[i] << ": ";
        cin >> salesFigure;
        setSales( i, salesFigure );
    }
}

void SalesPerson::setSales( int month, double amount ) {
    if ( month >= 0 && month <= 11 && amount > 0 ) {
        sales[ month - 1 ] = amount;
    } else 
        cout << "Invalid month of sales figure" << endl;
}

void SalesPerson::printAnnualSales() {
    cout << setprecision( 2 ) << fixed
        << "\nThe total annumal sales are: $"
        << totalAnnualSales() << endl;
}

double SalesPerson::totalAnnualSales() {
    double total = 0.0;
    for (int i = 0; i < 12; i++) {
        total += sales[i];
    }

    return total;
}