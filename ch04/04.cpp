#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string firstname;
	string lastname;
	string name;

	cout << "Enter your first name: ";
	getline(cin, firstname);
	cout << "Enter your last name: ";
	getline(cin, lastname);

	name += lastname;
	name += ", ";
	name += firstname;

	cout << "Here's the information in a single string: " << name;

	return 0;
}
