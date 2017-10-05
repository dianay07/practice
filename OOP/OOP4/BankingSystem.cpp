#include "BankingSystem.h"
BankingSystem::BankingSystem(int id, int money, char* name) : accID(id), stockMoney(money)
{
	accName = new char (strlen(name + 1));
	strcpy(accName, name);
}
BankingSystem::BankingSystem(const BankingSystem & ref) : accID(ref.accID), stockMoney(ref.stockMoney)
{
	accName = new char(strlen(ref.accName + 1));
	strcpy(accName, ref.accName);
}
BankingSystem::~BankingSystem()
{
	delete[] accName;
}

int BankingSystem::deposit(int money)
{
	stockMoney += money;
	return stockMoney;
}

int BankingSystem::withdraw(int money)
{
	if (stockMoney <= money)
		return 0;

	stockMoney -= money;
	return stockMoney;
}

void BankingSystem::showAll()
{
	cout << "°èÁÂ ID : " << accID << endl;
	cout << "°èÁÂ ÀÜ¾× : " << stockMoney << endl;
	cout << "°èÁÂÁÖ : " << accName << endl;
}