/*
 * SavingAccount.hpp
 *
 *  Created on: 30 dic. 2019
 *      Author: webins
 */

#ifndef SAVINGACCOUNT_HPP_
#define SAVINGACCOUNT_HPP_
#include "Account.hpp"

class SavingAccount:public Account {
public:
	double intRate;

	SavingAccount(double);
	SavingAccount();

	double getIntRate(void);
};



#endif /* SAVINGACCOUNT_HPP_ */
