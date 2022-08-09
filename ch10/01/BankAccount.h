//BankAccount.h
#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_
 
#include<string>
 
class BankAccount
{
private:
	std::string name;
	std::string account;
	double deposit;
public:
	BankAccount();
	BankAccount(const std::string& n, const std::string& acc = "12345678abc", double dep = 0.0);
	~BankAccount();
 
	void show();
	void deposit_money(double m);
	void draw_money(double m);
};
 
#endif // !BANKACCOUNT_H_
