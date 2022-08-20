//hasDMA.h
#ifndef HASDMA_H
#define HASDMA_H
 
#include<iostream>
#include "ABC.h"
 
class hasDMA :
    public ABC
{
private:
    char* style;
public:
    hasDMA(const char* s = "none", const char* l = "null", int r = 0);
    hasDMA(const char* s, const ABC& a);
    hasDMA(const hasDMA& hs);
    virtual ~hasDMA();
    virtual void View()const;
    virtual hasDMA& operator=(const hasDMA& rs);
};
#endif // !HASDMA_H
