#include <iostream>

using namespace std;

int main() {
	std::cout << "Never gonna give you up\n";
	std::cout << "Never gonna let you down!\n";


	int year = 2020;
	double price = 9999.99;
	char status = 'N';
	bool for_sale = true;
	string make = "Ford";
	string model = "Mustang";

	string car = make + " " + model;

	cout << "Year: " << year << endl;
	cout << "Price: " << price << endl;
	cout << "Model: " << car << endl;
	cout << "New/Used: " << status << endl;
	cout << "is onsale " <<  for_sale << endl;

	return 0;
}