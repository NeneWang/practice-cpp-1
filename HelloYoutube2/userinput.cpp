#include <iostream>
#include <string>

using namespace std;

int main_2() {

	string name;
	int age;
	cout << "Please enter your name\n";
	getline(cin, name);


	cout << "Welcome, " << name << "\n";

	cout << "Please enter your age\n";
	cin >> age;

	cout << "You setted up your age as: " + age;

	cout << endl;
	return 0;

}