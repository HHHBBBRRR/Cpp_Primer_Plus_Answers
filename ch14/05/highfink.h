#ifndef HIFHFINK_H_
#define HIFHFINK_H_

#include "manager.h"
#include"fink.h"

class highfink :
    public manager, public fink
{
protected:
    void Get();
    void Data()const;
public:
    highfink() : abstr_emp(), manager(), fink() {}
    highfink(const std::string& fn, const std::string& ln = "Nully", const std::string j = "Nully",
        int ico = 0, std::string rpo = "Nully")
        : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}
    highfink(const abstr_emp& e, int ico, std::string& rpo)
        : abstr_emp(e), manager(e, ico), fink(e, rpo) {}
    highfink(const manager& m, const std::string& rpo)
        : abstr_emp(m), manager(m), fink(m, rpo) {}
    highfink(const fink& f, int ico)
        : abstr_emp(f), manager(f, ico), fink(f) {}
    highfink(const highfink& h);

    void SetAll();
    void ShowAll()const;
};

#endif // !HIFHFINK_H_
