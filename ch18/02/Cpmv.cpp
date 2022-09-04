#include<iostream>
#include "Cpmv.h"


Cpmv::Cpmv(std::string q, std::string z, int n)
    : theSize{ n }
{
    pi = new Info[n];
    for (int i = 0; i < n; i++)
    {
        pi[i].qcode = q;
        pi[i].zcode = z;
    }
}

Cpmv::Cpmv(const Cpmv& cp)
    : theSize{ cp.theSize }, pi{ nullptr }
{
    pi = new Info[cp.theSize];
    for (int i = 0; i < cp.theSize; i++)
    {
        pi[i] = cp.pi[i];
    }
}

Cpmv::Cpmv(Cpmv&& mv)
    : theSize{ mv.theSize }, pi{ mv.pi }
{
    mv.theSize = 0;
    mv.pi = nullptr;
}

Cpmv::~Cpmv()
{
    delete[] pi;
}

Cpmv& Cpmv::operator=(const Cpmv& cp)
{
    Cpmv copy = cp;
    std::swap(*this, copy);
    return *this;
}

Cpmv& Cpmv::operator=(Cpmv&& mv)
{
    std::swap(theSize, mv.theSize);
    std::swap(pi, mv.pi);

    return *this;
}

Cpmv Cpmv::operator+(const Cpmv& obj) const
{
    Cpmv temp;
    temp.theSize = this->theSize + obj.theSize;
    temp.pi = new Info[(this->theSize) + obj.theSize];
    for (int i = 0; i < this->theSize; i++)
    {
        temp.pi[i] = this->pi[i];
    }
    for (int i = this->theSize, j = 0; i < temp.theSize; i++, j++)
    {
        temp.pi[i] = obj.pi[j];
    }
    return temp;
}

void Cpmv::Display() const
{
    for (int i = 0; i < theSize; i++)
    {
        std::cout << i + 1 << ": " << pi[i].qcode << " " << pi[i].zcode << "\n";
    }
}
