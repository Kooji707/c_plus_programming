#ifndef SALESP_H
#define SALESP_H

class SalesPerson
{
private:
    double totalAnnualSales();
    double sales[12];
public:
    SalesPerson();
    void getSalesFromUser();
    void setSales( int, double );
    void printAnnualSales();
};

#endif