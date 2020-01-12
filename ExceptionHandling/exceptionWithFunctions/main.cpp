#include <iostream>

using namespace std;

double calculateAvg(int, int);
int main(){
	int milles =0, gallons =0;
	double millesPerGallons=0;
	cout << "Enter the milles: ";
	cin >> milles;
	cout << "Enter the gallons: ";
	cin >> gallons;
	try{
		millesPerGallons = calculateAvg(milles, gallons);
		cout << "The milles per gallons is: " << millesPerGallons << endl;
	}catch (int &exc) {
		cerr << "Cannot divide by zero" << endl;
		cerr << "Exiting...";
	}
	return 0;
}

double calculateAvg(int milles, int gallons){
	if(gallons == 0) throw -1;
	return static_cast<double>(milles)/ gallons;
}
