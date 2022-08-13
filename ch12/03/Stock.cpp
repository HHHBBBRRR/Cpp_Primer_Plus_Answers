//Stock.cpp
#include<cstring>
#include "Stock.h"
 
int Stock::num_companies = 0;
 
Stock::Stock()
{
	str = new char[1];
	str[0] = '\0';
	shares = 0;
	share_val = 0.0;
	set_tot();
	num_companies++;
}
 
Stock::Stock(const char* s, long n, double pr)
{
	str = new char[strlen(s)+1];
	std::strcpy(str, s);
	shares = n;
	share_val = pr;
	set_tot();
	num_companies++;
}
 
Stock::Stock(const Stock& st)
{
	str = new char[strlen(st.str) + 1];
	std::strcpy(str, st.str);
	shares = st.shares;
	share_val = st.share_val;
	set_tot();
	num_companies++;
}
 
Stock::~Stock()
{
	num_companies--;
	delete[]str;
}
 
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purshased can't be negative."
			<< "Transaction is abored.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}
 
void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares sold can't be negative. "
			<< "Transaction is abored.\n";
	}
	else if (num > shares)
	{
		std::cout << "You can't sell more than you have! "
			<< "Transaction is abored.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
 
void Stock::update(double price)
{
	share_val = price;
	set_tot();
}
 
const Stock& Stock::topval(const Stock& s)const
{
	if (s.total_val > total_val)
	{
		return s;
	}
	else
	{
		return *this;
	}
}
 
std::ostream& operator<<(std::ostream& os, const Stock& st)
{
	os << "Company: " << st.str
		<< "Shares: " << st.shares<<'\n'
		<< "Share Price: $" << st.share_val
		<< "Total Worth: $" << st.total_val << '\n';
	return os;
}
