#ifndef MANAGER_H_
#define MANAGER_H_

#include "abstr_emp.h"

class manager :
    virtual public abstr_emp
{
private:
    int inchargeof;
protected:
    void Get();
    void Data()const;
public:
    manager() : abstr_emp(), inchargeof(0) {}
    manager(const std::string& fn, const std::string& ln = "Nully", const std::string j = "Nully",
        int ico = 0)
        : abstr_emp(fn, ln, j), inchargeof(ico) {}
    manager(const abstr_emp& e, int ico = 0)
        : abstr_emp(e), inchargeof(ico) {}
    manager(const manager& m);

    void SetAll();
    void ShowAll()const;
};

#endif // !MANAGER_H_
