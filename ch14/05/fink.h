#ifndef FINK_H_
#define FINK_H_

#include<string>
#include "abstr_emp.h"

class fink :
    virtual public abstr_emp
{
private:
    std::string reportsto;
protected:
    void Get();
    void Data()const;
public:
    fink() : abstr_emp(), reportsto("Nully") {}
    fink(const std::string& fn, const std::string& ln = "Nully", const std::string j = "Nully",
        const std::string& rpo = "Nully")
        : abstr_emp(fn, ln, j), reportsto(rpo) {}
    fink(const abstr_emp& e, const std::string& rpo = "Nully")
        : abstr_emp(e), reportsto(rpo) {}
    fink(const fink& f);

    void SetAll();
    void ShowAll()const;
};

#endif // !FINK_H_
