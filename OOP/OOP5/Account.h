#pragma once
#include <iostream>
#include <string>
using namespace std;
const int nameLimit = 20;

enum { MAKE = 1, DEPOSIT = 2, WITHDRAW = 3, SHOW = 4, EXIT =5 };

class Account
{
private:
	int accID;
	int stockMoney;
	char* accName;

public:
	Account(int id, int money, char* name);
	Account(const Account& ref);
	~Account();

	int deposit(int money);
	int withdraw(int money);
	void showInfo();
};

