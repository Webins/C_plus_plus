#include <iostream>

using namespace std;
int main(){
	int milles =0, gallons =0;
	double millesPerGallons=0;

	cout << "Enter the milles: ";
	cin >> milles;
	cout << "Enter the gallons: ";
	cin >> gallons;


	try{
		if(gallons == 0)
			throw -1;
		millesPerGallons = static_cast<double>(milles)/ gallons;
		cout << "The milles per gallons is: " << millesPerGallons << endl;

	}catch (int &exc) {
		cerr << "Cannot divide by zero" << endl;

	}

}
