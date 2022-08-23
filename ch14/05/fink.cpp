#include "fink.h"

using std::cout;
using std::cin;
using std::endl;

void fink::Get()
{
	cout << "Enter fink reports: ";
	getline(cin, reportsto);
}

void fink::Data() const
{
	cout << "Fink reports: " << reportsto << endl;
}

fink::fink(const fink& f)
	: abstr_emp(f)
{
	reportsto = f.reportsto;
}

void fink::SetAll()
{
	abstr_emp::Get();
	Get();
}

void fink::ShowAll() const
{
	abstr_emp::Data();
	Data();
}
