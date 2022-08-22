#include<iostream>
#include<cctype>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::toupper;

void change(string& s);

int main()
{
	cout << "Enter a string (q to quit): ";
	string s;
	getline(cin, s);
	while (s!="q")
	{
		change(s);
		cout << s << endl;
		cout << "Next string (q to quit): ";
		getline(cin, s);
	}
	cout << "Bye";
}

void change(string& s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] = toupper(s[i]);
	}
}
