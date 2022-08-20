//baseDMA.h
#ifndef BASEDMA_H
#define BASEDMA_H
 
#include<iostream>
#include "ABC.h"
 
class baseDMA :
    public ABC
{
public:
	baseDMA(const char* l = "null", int r = 0) : ABC(l, r) {}
	baseDMA(const baseDMA& rs) : ABC(rs) {}
	virtual ~baseDMA() {}
 
	virtual void View()const;
};
 
#endif // !BASEDMA_H
