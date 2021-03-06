#include "CheckingAccount.hpp"

int CheckingAccount::checkingIdentifier = 0;

CheckingAccount::CheckingAccount(std::string nameVal, double balanceVal)
	:Account(nameVal, balanceVal), id(++checkingIdentifier){}


CheckingAccount::CheckingAccount()
	:CheckingAccount("Unnamed checking account", 0.0){};
CheckingAccount::CheckingAccount(std::string nameVal)
	:CheckingAccount(nameVal, 0.0) {};


void CheckingAccount::withdraw(double amount){
		amount += fee;
		Account::withdraw(amount);
}

void CheckingAccount::deposit(double amount){
		Account::deposit(amount);
}

void CheckingAccount::print(std::ostream &os) const{
	os << "[Account type: Checking, Name: " << name << ", Balance: " << balance << ", Id: " << id <<  "]";
}


std::string CheckingAccount::getName(void) const{
	return name;
}
double CheckingAccount::getBalance(void) const{
	return balance;
}



