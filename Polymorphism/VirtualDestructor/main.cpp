#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Account{
public:
	virtual void withdraw(double amount) const{
		cout << "Account::Withdraw"  << endl;
	}
	virtual ~Account(){cout <<"Account::Destructor" << endl;}
};

class Checking : public Account{
public:
	virtual void withdraw(double amount)const override{
		cout << "Checking::Withdraw"  << endl;
	}
	virtual ~Checking(){cout <<"Checking::Destructor" << endl;}
};

class Saving : public Account{
public:
	virtual void withdraw(double amount)const override{
		cout << "Saving::Withdraw"  << endl;
	}
	virtual ~Saving(){cout <<"Saving::Destructor" << endl;}
};

class Trust : public Saving{
public:
	virtual void withdraw(double amount)const override{
		cout << "Trust::Withdraw"  << endl;
	}
	virtual ~Trust(){cout <<"Trust::Destructor" << endl;}
};



int main(){
	Account * p1 = new Account();
	Account * p2 = new Saving();
	Account * p3 = new Checking();
	Account * p4 = new Trust();

	Account *arr [] = {p1, p2, p3, p4};
	for(int i=0; i <4; i++){
		arr[i] -> withdraw(2000);
	}

	delete p1;
	delete p2;
	delete p3;
	delete p4;
	return 0;
}
