/*
 * Account.hpp
 *
 *  Created on: Jan 6, 2020
 *      Author: webins
 */

#ifndef ACCOUNT_HPP_
#define ACCOUNT_HPP_
#include <string>
#include <iostream>

#include "I_Printable.hpp"

class Account : public I_Printable{
	static int createdAccounts;
protected:
	std::string name;
	double balance;
public:
	Account();
	Account(std::string);
	Account(std::string , double);
	virtual bool deposit(double) =0;
	virtual bool withdraw(double) =0;
	virtual void print(std::ostream &) const =0;
	virtual ~Account() = default;
	static int getTotalAccounts(void);
	virtual std::string getName(void) const =0;
	virtual double getBalance(void) const =0;
};








#endif /* ACCOUNT_HPP_ */
