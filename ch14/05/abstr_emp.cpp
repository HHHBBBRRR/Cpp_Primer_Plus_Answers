#include "abstr_emp.h"

using std::cout;
using std::cin;
using std::endl;

void abstr_emp::Get()
{
	cout << "Enter first name: ";
	getline(cin, fname);
	cout << "Enter last name: ";
	getline(cin, lname);
	cout << "Enter job: ";
	getline(cin, job);
}

void abstr_emp::Data() const
{
	cout << "First name: " << fname << endl;
	cout << "Last name: " << lname << endl;
	cout << "Job: " << job << endl;
}

abstr_emp::abstr_emp(const std::string& fn, const std::string& ln, const std::string j)
{
	fname = fn;
	lname = ln;
	job = j;
}

abstr_emp::abstr_emp(const abstr_emp& e)
{
	fname = e.fname;
	lname = e.lname;
	job = e.job;
}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e)
{
	e.ShowAll();
	return os;
}
