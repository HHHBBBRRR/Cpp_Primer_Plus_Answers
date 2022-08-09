//BankAccount.cpp
#include<iostream>
#include "BankAccount.h"
 
BankAccount::BankAccount()
{
	name = "Stephen Prata";
	account = "12345678abc";
	deposit = 0.0;
}
 
BankAccount::BankAccount(const std::string& n, const std::string& acc, double dep)
{
	name = n;
	account = acc;
	deposit = dep;
}
 
BankAccount::~BankAccount() {}
 
void BankAccount::show()
{
	using std::cout;
 
	cout << "Name: " << name << '\n';
	cout << "Account: " << account << '\n';
	cout << "Deposit: " << deposit << '\n';
}
 
void BankAccount::deposit_money(double m)
{
	deposit += m;
}
 
void BankAccount::draw_money(double m)
{
	deposit -= m;
}
