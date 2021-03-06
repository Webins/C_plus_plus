#include "Accounts_Util.hpp"

void display(std::vector<std::unique_ptr<Account>> &va){
	for(auto &accounts: va)
		std::cout << *accounts << std::endl;
}


void depositAll(std::vector<std::unique_ptr<Account>> &va, double amount){
	for(auto &accounts: va){
		accounts->deposit(amount);
		std::cout << "A deposit was made to the account of \"" << accounts-> getName() << "\" for an amount of " << amount << "$\n";
	}
}


void withdrawAll(std::vector<std::unique_ptr<Account>> &va, double amount){
	for(auto &accounts: va){
		accounts->withdraw(amount);
		std::cout << "A withdraw was made to the account of \"" << accounts-> getName() << "\" for an amount of " << amount << "$\n";
	}
}

