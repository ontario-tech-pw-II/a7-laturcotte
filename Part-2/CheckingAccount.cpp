#include "CheckingAccount.h"
#include<iomanip> 

using namespace std;

	
// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee ) : Account( initialBalance ) 
{
	if (fee > 0) {
		transactionFee = fee; 
	} else {
		transactionFee = 0; 
	}
} 

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
	Account::credit(amount); 
	chargeFee(); 
} 

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{	
	if (Account::debit(amount)) {
		chargeFee(); 
		return true; 
	} else {
		return false; 
	}
}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	double newBalance = getBalance() - transactionFee; 
	setBalance(newBalance); 
}

void CheckingAccount::display(ostream & os) const
{	
	os << fixed << setprecision(2); 
	os << "Account type: Checking" << endl; 
	os << "Balance: $ " << getBalance() << endl; 
	os << "Transaction fee: " << transactionFee << endl; 
}
