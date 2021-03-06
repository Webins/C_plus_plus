#include "Accounts_Util.hpp"

void display(std::vector<Account*> &va){
	for(auto &accounts: va)
		std::cout << *accounts << std::endl;
}


void depositAll(std::vector<Account*> &va, double amount){
	for(auto &accounts: va){
		if(accounts->deposit(amount))
		std::cout << "A deposit was made to the account of \"" << accounts-> getName() << "\" for an amount of " << amount << "$\n";
	}
}


void withdrawAll(std::vector<Account*> &va, double amount){
	for(auto &accounts: va){
		if(accounts->withdraw(amount))
		std::cout << "A withdraw was made to the account of \"" << accounts-> getName() << "\" for an amount of " << amount << "$\n";
	}
}

