//Classic.h
#ifndef CLASSIC_H_
#define CLASSIC_H_

#include "Cd.h"

class Classic :
    public Cd
{
private:
    char* major;
public:
    Classic(const char* m = "null",
        const char* p = "null", const char* l = "null", int n = 0, double x = 0.0);
    Classic(const Classic& c);
    virtual ~Classic();
    virtual void Report()const;
    Classic& operator=(const Classic& c);
};

#endif // !CLASSIC_H
