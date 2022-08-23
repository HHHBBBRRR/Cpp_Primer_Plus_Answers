#include "employee.h"

void employee::SetAll()
{
	abstr_emp::Get();
}

void employee::ShowAll() const
{
	abstr_emp::Data();
}
