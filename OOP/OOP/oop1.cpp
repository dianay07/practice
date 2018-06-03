#include "OOP1.h"
OOP1::OOP1()
{
}
OOP1::~OOP1()
{
}

void OOP1::showMenu()
{
	cout << "----MENU----" << endl;
	cout << "1. 계좌 개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void OOP1::makeAccount()
{
	cout << "예금주명 : ";
	cin >> bankUser[accNum].userName;
	cout << "ID : ";
	cin >> bankUser[accNum].ID;
	cout << "초기 입금액 :";
	cin >> bankUser[accNum].money;
	accNum++;
}

void OOP1::deposit()
{
	int id, money;
	cout << "ID를 입력 :";
	cin >> id;

	for (int i = 0; i < accNum; i++)
	{
		if (id == bankUser[accNum].ID)
		{
			cout << "입금할 금액 :";
			cin >> money;
			money += bankUser[accNum].money;
			cout << "입금 완료" << endl;
		}
		else
		{
			cout << "계좌가 존재하지 않는다" << endl;
		}
	}
}

void OOP1::withdraw()
{
}
