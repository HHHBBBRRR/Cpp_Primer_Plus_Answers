#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "abstr_emp.h"

class employee :
    public abstr_emp
{
public:
    employee() : abstr_emp() {}
    employee(const std::string& fn, const std::string& ln = "Nully", const std::string j = "Nully")
        : abstr_emp(fn, ln, j) {}

    virtual void SetAll();
    virtual void ShowAll()const;
};

#endif // !EMPLOYEE_H_
