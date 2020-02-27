#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <iostream>
#include "Account.h"

using namespace std;

class SavingsAccount: public Account {
    private:
        double interestRate; 

    public:
        SavingsAccount(double initialBalance, double rate ); 
        double calculateInterest(); 
        void display(ostream & os) const; 


};

#endif 