#include <iostream>
#include <string>
using namespace std;

double calculateAvg(int, int);
int main(){
	int miles =0, gallons =0;
	double milesPerGallons=0;
	cout << "Enter the miles: ";
	cin >> miles;
	cout << "Enter the gallons: ";
	cin >> gallons;
	try{
		milesPerGallons = calculateAvg(miles, gallons);
		cout << "The miles per gallons is: " << milesPerGallons << endl;
	}catch (int &e) {
		cerr << "Cannot divide by zero" << endl;
		cerr << "Exiting...";
	}catch(string &e){
		cerr << "Cannot calculate average of a " << e << endl;
		cerr << "Exiting";
	}catch(...){
		cerr << "Unknown error" << endl;
		cerr << "Exiting";
	}
	return 0;
}

double calculateAvg(int miles, int gallons){
	if(gallons == 0) throw -1;
	if(miles < 0 || gallons < 0) throw std::string {"negative value"};
	return static_cast<double>(miles)/ gallons;
}
