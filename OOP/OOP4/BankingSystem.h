#pragma once
#include <string>
#include <iostream>
using namespace std;
const int nameSpaceLimit = 20;

enum{ MAKE = 1, DEPOSIT = 2, WITHDRAW = 3, SHOW = 4, EXIT = 5 };

class BankingSystem
{
private:
	int accID;					// 계좌 ID
	int stockMoney;					// 계좌 잔액
	char* accName;				// 계좌주 이름

public:
	BankingSystem(int id, int money, char* name);
	BankingSystem(const BankingSystem& ref);
	~BankingSystem();

	//void ShowMenu();			// 메뉴를 보여주는 함수
	//void MakeAccont();			// 계좌를 만드는 함수
	//void DepositMoney();		// 계좌에 돈을 입금하는 함수
	//void WithdrawMoney();		// 계좌에서 돈을 출금하는 함수
	//void ShowAllClientInfo();	// 시스템내 존재하는 계좌들의 정보를 모두 출력

	int GetaccID() const { return accID; }
	int deposit(int money);
	int withdraw(int money);
	void showAll();
};

