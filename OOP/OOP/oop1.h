// C스타일로 작성하라는데 잘모르겟고 그냥 했다.
#pragma once
#include <string>
#include <iostream>
using namespace std;

//메뉴 상황 
enum state
{
	MAKE = 1, DEPOSIT = 2, WITHDRAW = 3, SHOW = 4, MENU = 6 , END = 5
};

//이름 최대
const int maxNameSpace = 100;

//계좌 구성
typedef struct account
{
	int ID;					// 고객 아이디
	int stockMoney;			// 잔액
	char clientName[maxNameSpace];		// 고객 이름
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
	void makeAccount();			// 계좌생성
	void depositMoney();		// 입금
	void takeMoney();			// 출금
	void showAllClientInfo();	// 전체고객 조회
};

