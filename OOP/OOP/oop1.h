#pragma once
#include <iostream>
using namespace std;

// --------MENU-------
// 1. 계좌개설
// 2. 입금
// 3. 출금
// 4. 계좌정보 전체 출력
// 5. 프로그램 종료

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

	void makeAccount();		// 계좌 개설
	void deposit();			// 입금
	void withdraw();		// 출금
};

