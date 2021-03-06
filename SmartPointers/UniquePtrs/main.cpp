#include <iostream>
#include "SavingAccount.hpp"
#include "TrustAccount.hpp"
#include "CheckingAccount.hpp"
#include "Account.hpp"
#include "Accounts_Util.hpp"
#include <vector>
#include <memory>
using namespace std;

class Test{
	int data;
public:
	Test():data(0){cout<<"Test Constructor called for data = " << data <<  endl;};
	Test(int d):data(d){cout<<"Test Constructor called for data = " << data << endl;};
	~Test(){cout<<"Test Destructor called  for data = " << data << endl;}
	int getData() const {return data;}
};


int main(){
	Test *t1 = new Test(1000);
	delete t1;
	unique_ptr<Test> t2{ new Test(1005)};
	unique_ptr<Test> t3 = make_unique<Test>(1500);
	auto t4 = make_unique<Test>(2500);
	unique_ptr<Test> t5;

//	t1 = t5; Cant copy
	t5 = move(t3); // t5 se refiere ahora a a t3 y t3 sera null
	if(!t3) cout << "T3 is nullptr" << endl;


	unique_ptr<Account> a1 = make_unique<CheckingAccount>("Checking", 5000);
	cout << *a1 << endl;
	a1->deposit(3000);
	cout << *a1 << endl;

	vector<unique_ptr<Account>> accounts;
	accounts.push_back(make_unique<CheckingAccount>("Moe", 3000));
	accounts.push_back(make_unique<TrustAccount>("Jerry", 8000));
	accounts.push_back(make_unique<SavingAccount>("Laura", 6000));

	for(const auto &accs: accounts)
		cout << *accs << endl;

	return 0;

}




