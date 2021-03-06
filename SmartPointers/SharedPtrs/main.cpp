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

void func(shared_ptr<Test> p){
	cout << "Use count: " << p.use_count() << endl;
}

int main(){
	shared_ptr<int> p1 {new int(100)};
	cout << "Use count: " << p1.use_count() << endl;
	shared_ptr<int> p2 = p1;
	cout << "Use count: " << p2.use_count() << endl;
	p2.reset();
	cout << "Use count: " << p1.use_count() << endl;
	cout << "Use count: " << p2.use_count() << endl;

	cout << "<<<<<<<<<<<<<<<TEST>>>>>>>>>>>>>>" << endl;
	shared_ptr<Test> ptr = make_shared<Test>(100);
	cout << "Use count: " << ptr.use_count() << endl;
	func(ptr);
	cout << "Use count: " << ptr.use_count() << endl;
	{
		shared_ptr<Test> ptr1 = ptr;
		cout << "Use count: " << ptr1.use_count() << endl;
		ptr.reset();
		cout << "Use count: " << ptr1.use_count() << endl;
		{
			shared_ptr<Test> ptr2 = ptr1;
			cout << "Use count: " << ptr1.use_count() << endl;
		}
		cout << "Use count: " << ptr1.use_count() << endl;
	}
	cout << "Use count: " << ptr.use_count() << endl;

	cout << "<<<<<<<<<<<<<<<Account>>>>>>>>>>>>>>" << endl;

	shared_ptr<Account> acc1 = make_shared<CheckingAccount>("Checking, 50000");
	shared_ptr<Account> acc2 = make_shared<SavingAccount>("Saving, 50000");
	shared_ptr<Account> acc3 = make_shared<TrustAccount>("Trust, 50000");

	vector <shared_ptr<Account>> vec;
	vec.push_back(acc1);
	vec.push_back(acc2);
	vec.push_back(acc3);

	for(const auto &accs : vec)
	{
		cout << *accs << endl;
		cout << "Use count: " << accs.use_count() << endl;
	}
	return 0;

}




