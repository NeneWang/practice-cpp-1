#include <iostream>
#include <string>

using namespace std;

int main() {

	string name;
	int age;
	cout << "Please enter your name\n";
	getline(cin, name);


	cout << "Welcome, " << name;

	cout << "Please enter your age\n";
	cin >> age;

	cout << "You setted up your age as: " + age;

	cout << endl;
	return 0;

}