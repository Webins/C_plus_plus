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

class Account{
	friend std::ostream &operator<<(std::ostream &, const Account &);
private:
	static int identifier;
	std::string name;
	double balance;
	int id;
public:
	Account(std::string, double);
	Account(std::string);
	Account();

	bool deposit(double);
	bool withdraw(double);

	std::string getName(void) const;
	double getBalance(void) const ;
	int getId(void) const;
};








#endif /* ACCOUNT_HPP_ */
