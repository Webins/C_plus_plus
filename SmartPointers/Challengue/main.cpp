#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test{
	int data;
	public:
	Test():data(0){cout<<"Test Constructor called for data = " << data <<  endl;};
	Test(int d):data(d){cout<<"Test Constructor called for data = " << data << endl;};
	~Test(){cout<<"Test Destructor called  for data = " << data << endl;}
	int getData() const {return data;}
};



auto make(void);//prototype
auto make(void){
	return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &, int);//prototype
void fill(vector<shared_ptr<Test>> &vec, int num){
	int data;
	for(int i =0; i < num; i++){
		cout << "Enter data at pos[" << i+1 << "]"<< endl;
		cin >> data;
		vec.push_back(make_shared<Test>(data));
	}
}
void display(const vector<shared_ptr<Test>> &);//prototype
void display(const vector<shared_ptr<Test>> &vec){
	int i =0;
	for(const auto &sharedPtrs: vec)
		cout << "The shared pointer at pos " << ++i << " contains : " << sharedPtrs->getData() << endl;
}

int main(){
	int num;
	unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
	vec_ptr = make();
	cout << "How many data points do you want to enter: ";
	cin >> num;
	fill(*vec_ptr, num);
	display(*vec_ptr);

	return 0;
}

//is the same as auto
//unique_ptr<vector<shared_ptr<Test>>> make(void);//prototype
//unique_ptr<vector<shared_ptr<Test>>> make(void){
//	return make_unique<vector<shared_ptr<Test>>>();
//}







