#include <iostream>
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

void my_deleter(Test *raw_pointer){
	cout << "Deleting Test data: " << raw_pointer->getData() << endl;
	delete raw_pointer;
}



int main(){
	shared_ptr<Test> ptr {new Test(1500), my_deleter};
	shared_ptr<Test> ptr1 (new Test(2500), [] (Test *ptr1_lambda){
		cout << "Deleting Test data: " << ptr1_lambda->getData() << endl;
		delete ptr1_lambda;
	});


	return 0;
}
