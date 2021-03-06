/*
 * TrustAccount.hpp
 *
 *  Created on: Jan 6, 2020
 *      Author: webins
 */

#ifndef TRUSTACCOUNT_HPP_
#define TRUSTACCOUNT_HPP_

#include "SavingAccount.hpp"
#include "IllegalTrustWithdrawException.hpp"

class TrustAccount : public SavingAccount{
	static int TrustIdentifier;
private:
	int counter;
	int id;
	static constexpr int counterInit =0;
	static constexpr int threshold = 5000;
public:
	TrustAccount(std::string, double, double);
	TrustAccount(std::string, double);
	TrustAccount(std::string);
	TrustAccount();
	virtual void print(std::ostream &) const override;
	virtual void withdraw(double amount) override;
	virtual void deposit(double amount) override;
	virtual std::string getName(void) const override;
	virtual double getBalance(void) const override;
	virtual ~TrustAccount() = default;
};







#endif /* TRUSTACCOUNT_HPP_ */
