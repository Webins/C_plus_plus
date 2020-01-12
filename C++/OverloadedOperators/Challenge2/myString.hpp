/*
 * Player.hpp
 *
 *  Created on: 19 dic. 2019
 *      Author: webins
 */
#include <string>
#include <iostream>
#include <cstring>
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

class myString{
	//streams extraction and insertion
	friend std::ostream &operator<<(std::ostream &, const myString&);
	friend std::istream &operator>>(std::istream &, myString&);
	//compare
	friend bool operator==(const myString &, const myString&);
	friend bool operator!=(const myString &, const myString&);
	friend bool operator>(const myString &, const myString&);
	friend bool operator<(const myString &, const myString&);
	//concat
	friend myString operator+(const myString &, const myString&);
	friend myString operator+(const myString& ,myString &&);
	friend myString& operator+=(myString &, const myString&);
	friend myString& operator+=(myString &, myString&&);
	//lower and uppercase
	friend myString operator+(myString&);
	friend myString operator-(myString&);
	//Repeat
	friend myString operator*(const myString &, size_t);
	friend myString& operator*=(myString &, size_t);
	//post and pre increment
	friend myString &operator++(myString&); //pre
	friend myString operator++(myString&, int); //post
private:
	char * str;
public:
//Constructors
	myString();
	myString(const char *);

//Destructor
	~myString();

//Copy constructor
	myString(const myString &);

//Move constructor
	myString(myString &&);

	myString &operator=(const myString &);
	myString &operator=(myString &&);

//Methods
	size_t getLenght(void) const;
	void display(void) const;
	const char * getString(void) const;
};



#endif /* PLAYER_HPP_ */

