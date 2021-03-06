#include <iostream>
#include <string>
#include <memory>
using namespace std;

class IPrintable{
	friend ostream &operator<<(ostream &, const IPrintable &);
public:
	virtual void print(ostream &) const =0;
	virtual ~IPrintable(){};
};

ostream &operator<<(ostream &os, const IPrintable &obj){
	obj.print(os);
	return os;
}

class Account: public IPrintable{
public:
	virtual void withdraw(double amount) const{
		cout << "Account::Withdraw"  << endl;
	}
	virtual void print(ostream &os) const override{
		os << "Account display";
	}
	virtual ~Account(){}
};


class Checking : public Account{
public:
	virtual void withdraw(double amount)const override{
		cout << "Checking::Withdraw"  << endl;
	}
	virtual void print(ostream &os) const override{
		os << "Checking display";
	}
	virtual ~Checking(){}
};

class Saving : public Account{
public:
	virtual void withdraw(double amount)const override{
		cout << "Saving::Withdraw"  << endl;
	}
	virtual void print(ostream &os) const override{
		os << "Saving display";
	}
	virtual ~Saving(){}
};

class Trust : public Saving{
public:
	virtual void withdraw(double amount)const override{
		cout << "Trust::Withdraw"  << endl;
	}
	virtual void print(ostream &os) const override{
		os << "Trust display";
	}
	virtual ~Trust(){}
};

void printable(const IPrintable &obj){
	cout << obj << endl;
}

int main(){
	Account * p1 = new Account();
	Account * p2 = new Saving();
	Account * p3 = new Checking();
	Account * p4 = new Trust();

	Account *arr [] = {p1, p2, p3, p4};
	for(int i=0; i <4; i++){
		arr[i] -> withdraw(2000);
		cout << *arr[i] << endl;
	}
	printable(*p1);
	printable(*p4);
	delete p1;
	delete p2;
	delete p3;
	delete p4;
	return 0;
}
