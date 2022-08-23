#include "highfink.h"

void highfink::Get()
{
	manager::Get();
	fink::Get();
}

void highfink::Data() const
{
	manager::Data();
	fink::Data();
}

highfink::highfink(const highfink& h)
	: abstr_emp(h), manager(h), fink(h)
{
}

void highfink::SetAll()
{
	abstr_emp::Get();
	Get();
}

void highfink::ShowAll() const
{
	abstr_emp::Data();
	Data();
}
