#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	const int Arsize = 40;
	char firstname[Arsize];
	char lastname[Arsize];
	char grade;
	int age;
	
	cout << "What is your first name? ";
	cin.get(firstname, Arsize);
	cin.get();
	cout << "What is your last name? ";
	cin.getline(lastname, Arsize);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << lastname << ", " << firstname << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age << endl;

	return 0;
}
