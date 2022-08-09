#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::string;

int main()
{
	const int Arsize = 40;
	string name;
	string dessert;

	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}
