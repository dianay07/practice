#pragma once
#include <iostream>
using namespace std;

// --------MENU-------
// 1. ���°���
// 2. �Ա�
// 3. ���
// 4. �������� ��ü ���
// 5. ���α׷� ����

class OOP1
{
	enum stage {MENU = 0, MAKE, DEPOSIT, WITHDRAW, SHOW};

	typedef struct _account
	{
		int ID;
		char userName[20];
		int money;
	}Account;

private:
	Account bankUser[100];
	int accNum = 0;

public:
	OOP1();
	~OOP1();

	void makeAccount();		// ���� ����
	void deposit();			// �Ա�
	void withdraw();		// ���
};

