#pragma once
#include <string>
#include <iostream>
using namespace std;
const int nameSpaceLimit = 20;

enum{ MAKE = 1, DEPOSIT = 2, WITHDRAW = 3, SHOW = 4, EXIT = 5 };

class BankingSystem
{
private:
	int accID;					// ���� ID
	int stockMoney;					// ���� �ܾ�
	char* accName;				// ������ �̸�

public:
	BankingSystem(int id, int money, char* name);
	BankingSystem(const BankingSystem& ref);
	~BankingSystem();

	//void ShowMenu();			// �޴��� �����ִ� �Լ�
	//void MakeAccont();			// ���¸� ����� �Լ�
	//void DepositMoney();		// ���¿� ���� �Ա��ϴ� �Լ�
	//void WithdrawMoney();		// ���¿��� ���� ����ϴ� �Լ�
	//void ShowAllClientInfo();	// �ý��۳� �����ϴ� ���µ��� ������ ��� ���

	int GetaccID() const { return accID; }
	int deposit(int money);
	int withdraw(int money);
	void showAll();
};

