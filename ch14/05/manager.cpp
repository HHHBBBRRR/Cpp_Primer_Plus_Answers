#include "manager.h"

using std::cout;
using std::cin;
using std::endl;

void manager::Get()
{
	cout << "Enter number of abstr_emps managed: ";
	cin >> inchargeof;
	while (cin.get() != '\n')
	{
		continue;
	}
}

void manager::Data() const
{
	cout << "Inchargeof: " << inchargeof << endl;
}

manager::manager(const manager& m)
	: abstr_emp(m)
{
	inchargeof = m.inchargeof;
}

void manager::SetAll()
{
	abstr_emp::Get();
	Get();
}

void manager::ShowAll() const
{
	abstr_emp::Data();
	Data();
}
