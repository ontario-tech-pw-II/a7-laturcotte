#include "SavingsAccount.h"
#include <iomanip> 

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account(initialBalance) 
{
	if (rate < 0) {
		interestRate = 0; 
	} else {
		interestRate = rate; 
	} 
}

double SavingsAccount::calculateInterest() {
	// your code
} 
void SavingsAccount::display(ostream & os) const
{
	os << fixed << setprecision(2); 
	os << "Account type: Saving" << endl; 
	os << "Balance: $ " << getBalance() << endl; 
	os << "Interst Rate (%): " << interestRate * 100 << endl; 
}
