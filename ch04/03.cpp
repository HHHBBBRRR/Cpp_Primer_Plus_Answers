#include<iostream>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	const int Arsize = 40;
	char firstname[Arsize];
	char lastname[Arsize];
	char name[2 * Arsize];

	cout << "Enter your first name: ";
	cin.getline(firstname, Arsize);
	cout << "Enter your last name: ";
	cin.getline(lastname, Arsize);

	strcpy(name, lastname);
	strcat(name, ", ");
	strcat(name, firstname);

	cout << "Here's the information in a single string: " << name;

	return 0;
}
