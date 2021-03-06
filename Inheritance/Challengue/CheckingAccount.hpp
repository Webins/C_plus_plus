/*
 * CheckingAccount.hpp
 *
 *  Created on: Jan 6, 2020
 *      Author: webins
 */

#ifndef CHECKINGACCOUNT_HPP_
#define CHECKINGACCOUNT_HPP_

#include "Account.hpp"

class CheckingAccount : public Account{
	friend std::ostream &operator<<(std::ostream &, const CheckingAccount &);
	static constexpr double fee =  1.50;
public:
	CheckingAccount();
	CheckingAccount(std::string);
	CheckingAccount(std::string, double);
	bool withdraw(double);
};







#endif /* CHECKINGACCOUNT_HPP_ */
