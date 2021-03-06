/*
 * Accounts_Util.hpp
 *
 *  Created on: Jan 6, 2020
 *      Author: webins
 */

#ifndef ACCOUNTS_UTIL_HPP_
#define ACCOUNTS_UTIL_HPP_
#include "Account.hpp"


#include <vector>
void display(std::vector<Account*>&);
void depositAll(std::vector<Account*>&, double);
void withdrawAll(std::vector<Account*>&, double);


#endif /* ACCOUNTS_UTIL_HPP_ */
