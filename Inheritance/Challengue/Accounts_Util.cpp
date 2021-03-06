#include "Accounts_Util.hpp"

void display(std::vector<Account> &va){
	for(auto &accounts: va)
		std::cout << accounts;
}
void display(std::vector<SavingAccount> &vsa){
	for(auto &savingAccounts: vsa)
		std::cout << savingAccounts;
}
void display(std::vector<TrustAccount> &vta){
	for(auto &trustAccount: vta)
		std::cout << trustAccount;
}

void display(std::vector<CheckingAccount> &vca){
	for(auto &checkingAccount: vca)
		std::cout << checkingAccount;
}


void depositAll(std::vector<Account> &va, double amount){
	for(auto &accounts: va){
		if(accounts.deposit(amount))
			std::cout <<"Deposit completed to " << accounts.getName() << " for an amount of " << amount << "$" <<std::endl;
		else std::cout <<"Deposit failed by " << accounts.getName() << " for an amount of " << amount << "$" << std::endl;
	}
}

void depositAll(std::vector<CheckingAccount> &ca, double amount){
	for(auto &checkingAccounts: ca){
		if(checkingAccounts.deposit(amount))
			std::cout <<"Deposit completed to " << checkingAccounts.getName() << " for an amount of " << amount << "$" <<std::endl;
		else std::cout <<"Deposit failed by " << checkingAccounts.getName() << " for an amount of " << amount << "$" << std::endl;
	}
}

void depositAll(std::vector<SavingAccount> &vsa, double amount){
	for(auto &savingAccount: vsa){
			double perc = amount + ((amount * savingAccount.getInterestRate()) /100);
		if(savingAccount.deposit(amount))
			std::cout <<"Deposit completed to " << savingAccount.getName() << " for an amount of " << amount << "$" <<" + an interest rate of " <<savingAccount.getInterestRate() <<"%" <<" Making a total of " << perc << " deposited" <<std::endl;
		else std::cout <<"Deposit failed by " << savingAccount.getName() << " for an amount of " << amount << "$" <<std::endl;
	}
}
void depositAll(std::vector<TrustAccount> &vta, double amount){
	for(auto &trustAccount: vta){
			double perc = amount + ((amount * trustAccount.getInterestRate()) /100);
		if(trustAccount.deposit(amount))
			std::cout <<"Deposit completed to " << trustAccount.getName() << " for an amount of " << amount << "$" <<" + an interest rate of " <<trustAccount.getInterestRate() <<"%" <<" Making a total of " << perc << " deposited" <<std::endl;
		else std::cout <<"Deposit failed by " << trustAccount.getName() << " for an amount of " << amount << "$" <<std::endl;
	}
}



void withdrawAll(std::vector<Account> &va, double amount){
	for(auto &accounts: va){
		if(accounts.getBalance() < amount) std::cout << "The account of " << accounts.getName() << " has ";
		else std::cout <<"Withdraw completed by " << accounts.getName() << " for an amount of " << amount << "$" <<std::endl;
		accounts.withdraw(amount);
	}

}
void withdrawAll(std::vector<CheckingAccount> &vca, double amount){
	for(auto &checkingAccount: vca){
		if(checkingAccount.getBalance() < amount) std::cout << "The account of " << checkingAccount.getName() << " has ";
		else std::cout <<"Withdraw completed by " << checkingAccount.getName() << " for an amount of " << amount << "$ " << "+ the fee of 1.50$ " <<std::endl;
		checkingAccount.withdraw(amount);
	}

}

void withdrawAll(std::vector<SavingAccount> &vsa, double amount){
	for(auto &savingAccounts: vsa){
		if(savingAccounts.getBalance() < amount) std::cout << "The account of " << savingAccounts.getName() << " has ";
		else std::cout <<"Withdraw completed by " << savingAccounts.getName() << " for an amount of " << amount <<std::endl;
		savingAccounts.withdraw(amount);
	}
}

void withdrawAll(std::vector<TrustAccount> &vta, double amount){
	for(auto &trustAccount: vta){
		if(trustAccount.getBalance() < amount) std::cout << "The account of " << trustAccount.getName();
		else std::cout <<"Withdraw completed by " << trustAccount.getName() << " for an amount of " << amount << "$" <<std::endl;
		trustAccount.withdraw(amount);
	}
}
