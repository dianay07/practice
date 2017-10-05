// C��Ÿ�Ϸ� �ۼ��϶�µ� �߸𸣰ٰ� �׳� �ߴ�.
#pragma once
#include <string>
#include <iostream>
using namespace std;

//�޴� ��Ȳ 
enum state
{
	MAKE = 1, DEPOSIT = 2, WITHDRAW = 3, SHOW = 4, MENU = 6 , END = 5
};

//�̸� �ִ�
const int maxNameSpace = 100;

//���� ����
typedef struct account
{
	int ID;					// �� ���̵�
	int stockMoney;			// �ܾ�
	char clientName[maxNameSpace];		// �� �̸�
};

class oop1
{
protected:
	account arr[100];
	int havingAccount = 0;

public:
	oop1();
	~oop1();
	
	void showMenu();
	void makeAccount();			// ���»���
	void depositMoney();		// �Ա�
	void takeMoney();			// ���
	void showAllClientInfo();	// ��ü�� ��ȸ
};

