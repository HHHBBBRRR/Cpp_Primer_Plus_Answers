//usebankaccount.cpp
#include<iostream>
#include"BankAccount.h"
 
int main()
{
	BankAccount one;
	BankAccount two("Li");
	BankAccount three("Zhang", "asdfgh", 10000);
 
	one.show();
	two.deposit_money(20);
	two.show();
	three.draw_money(5000);
	three.show();
 
	return 0;
}
