#include "oop1.h"
oop1::oop1()
{
}
oop1::~oop1()
{
}

void oop1::showMenu()
{
	cout << "----------메뉴-------------" << endl;
	cout << "1. 계좌개설 " << endl;
	cout << "2. 입금 " << endl;
	cout << "3. 출금 " << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

// 계좌생성
void oop1::makeAccount()
{
	int id;
	char name[maxNameSpace];
	int money;

	cout << "[계좌개설]" << endl;
	cout << "ID를 입력해주세요 : " << endl; cin >> id;
	cout << "이름을 입력해주세요 : " << endl; cin >> name;
	cout << "입금액을 입력해주세요 : " << endl; cin >> money;

	//배열에 계좌정보 저장
	arr[havingAccount].ID = id;
	strcpy_s(arr[havingAccount].clientName, name);	// 유의;
	arr[havingAccount].stockMoney = money;

	//배열을 위로
	havingAccount++;
}

// 입금
void oop1::depositMoney()
{
	int id;
	int money;

	cout << "계좌 ID를 입력하세요." << endl;
	cin >> id;

	for (int i = 0; i < havingAccount; i++)
	{
		// 계좌 ID 체크
		if (arr[i].ID == id)
		{
			// ID의 주인을 보여준다
			cout << arr[i].clientName << endl;
			cout << arr[i].stockMoney << endl;

			// 입금 절차 진행
			cout << "입금 할 금액을 입력해주세요 : "; cin >> money;
			arr[i].stockMoney += money;
			cout << "입금완료" << endl;

			// 계산 후 정산
			cout << arr[i].stockMoney << endl;
		}
	}
	
}

// 춞금
void oop1::takeMoney()
{
	int id;
	int money;

	cout << "계좌 ID를 입력하세요." << endl;
	cin >> id;

	for (int i = 0; i < havingAccount; i++)
	{
		// 계좌 체크
		if (arr[i].ID == id)
		{
			// ID의 주인을 보여준다
			cout << arr[i].clientName << endl;
			cout << arr[i].stockMoney << endl;

			cout << "출금 할 금액을 입력해주세요 : "; cin >> money;

			if (money > arr[i].stockMoney)
			{
				cout << "잔액보다 출금액이 큽니다. 다시 입력해주세요" << endl;
				cin >> money;
			}
			else
			{
				cout << "출금 되었습니다." << endl;
				cout << arr[i].stockMoney << endl;
			}
		}
	}

}

void oop1::showAllClientInfo()
{
	for (int i = 0; i < havingAccount; i++)
	{
		if (!arr[i].ID == NULL)
		{
			cout << arr[i].ID << endl;
			cout << arr[i].clientName << endl;
			cout << arr[i].stockMoney << endl;
		}
	}
}
