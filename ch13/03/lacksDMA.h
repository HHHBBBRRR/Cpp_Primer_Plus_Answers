//lacksDMA.h
#ifndef LACKSDMA_H
#define LACKSDMA_H
 
#include<iostream>
#include "ABC.h"
 
class lacksDMA :
    public ABC
{
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
public:
    lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
    lacksDMA(const char* c, const ABC& a);
 
    virtual void View()const;
};
 
#endif // !LACKSDMA_H
