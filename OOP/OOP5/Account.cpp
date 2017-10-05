#include "Account.h"
Account::Account(int id, int money, char* name): accID(id), stockMoney(money)
{
	accName = new char(strlen(name + 1));
	strcpy(accName, name);
}
Account::Account(const Account& ref) : accID(ref.accID), stockMoney(ref.stockMoney)
{
	accName = new char(strlen(ref.accName + 1));
	strcpy(accName, ref.accName);
}
Account::~Account()
{
	delete[] accName;
}

int Account::deposit(int money)
{
	stockMoney += money;
	return stockMoney;
}

int Account::withdraw(int money)
{
	if (stockMoney <= money)
		return 0;
	
	stockMoney -= money;
	return stockMoney;
}

void Account::showInfo()
{
	cout << "ID : " << accID << endl;
	cout << "°èÁÂÁÖ¸í : " << accName << endl;
	cout << "°èÁÂÀÜ¾× : " << stockMoney << endl;
}
