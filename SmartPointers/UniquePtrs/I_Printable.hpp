/*
 * I_Printable.hpp
 *
 *  Created on: 9 ene. 2020
 *      Author: webins
 */

#ifndef I_PRINTABLE_HPP_
#define I_PRINTABLE_HPP_
#include <iostream>
class I_Printable{
	friend std::ostream &operator<<(std::ostream &, const I_Printable &);
	public:
		virtual void print(std::ostream &) const =0;
		virtual ~I_Printable() = default;
};

#endif /* I_PRINTABLE_HPP_ */
