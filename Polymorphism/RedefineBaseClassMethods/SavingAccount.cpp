#include "SavingAccount.hpp"

SavingAccount::SavingAccount(double intRateVal)
//	:Account(nameVal, balanceVal), intRate(intRateVal){}
	:intRate(intRateVal){};


SavingAccount::SavingAccount(void)
//	:SavingAccount(("SavingAccount" +std::to_string(getId() +1)), 0.0, 3.0){};
	:SavingAccount(3.0){};


//This deposit increments amount by a rate declared in the SavomgAccount;
void SavingAccount::deposit(double amount){
	amount = amount + (amount * getIntRate() )/ 100;
	Account::deposit(amount);
}

double SavingAccount::getIntRate(void){
	return intRate;
}


