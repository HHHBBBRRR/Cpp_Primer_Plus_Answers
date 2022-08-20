#ifndef VINTAGEPORT_H
#define VINTAGEPORT_H
 
#include<iostream>
#include "Port.h"
 
class VintagePort :
    public Port
{
private:
    char* nickname;
    int year;
public:
    VintagePort();
    VintagePort(const char* br, const char* st, int b, const char* nn, int y);
    VintagePort(const VintagePort& vp);
    ~VintagePort() { delete[] nickname; }
    VintagePort& operator=(const VintagePort& vp);
    void Show()const;
    friend std::ostream& operator<<(std::ostream& os, const VintagePort& vp);
};
 
#endif // !VINTAGEPORT_H
