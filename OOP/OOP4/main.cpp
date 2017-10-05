#include "BankingSystem.h"

BankingSystem* account[100];
int clientNunmber = 0;

int main()
{
	ShowMenu();
	int choice;
	
	while (1)
	{
		switch (choice)
		{
		case MAKE:
			MakeAccont();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case SHOW:
			ShowAllClientInfo();
			break;
		case EXIT:
			for (int i = 0; i < clientNunmber; i++)
			{
				delete account[i];
			}
			return 0;
		default:
			cout << "다시 다시" << endl;
			break;
		}
	}

	return 0;
}

// 메뉴를 보여주는 함수
void ShowMenu()
{
	cout << "-------------메뉴----------------" << endl;
	cout << "1. 계좌 생성 " << endl;
	cout << "2. 입금 " << endl;
	cout << "3. 출금 " << endl;
	cout << "4. 모든 고객정보 출력" << endl;
}

// 계좌를 만드는 함수
void MakeAccont()
{
	int id;
	int money;
	char name[nameSpaceLimit];

	cout << "--------계좌 생성--------" << endl;
	cout << "사용하실 ID를 입력해주세요 : "; cin >> id;
	cout << "계좌주의 이름을 입력해주세요 : "; cin >> name;
	cout << "계좌에 입금할 금액을 입력해 주세요 : "; cin >> money;

	account[clientNunmber] = new BankingSystem(id, money, name);
	clientNunmber++;
}

// 계좌에 돈을 입금하는 함수
void DepositMoney()
{
	int id;
	int money;

	cout << "-------입금------" << endl;
	cout << "입금하실 계좌에 ID를 입력해주세요 : "; cin >> id;

	for (int i = 0; i < clientNunmber; i++)
	{
		if (id == account[clientNunmber]->GetaccID)
		{
			cout << "입금하실 금액을 입력해 주세요 : "; cin >> money;
			cout << "입금완료" << endl;
			account[i]->deposit(money);

			return;
		}
		else
		{
			cout << "다시 입력해 주세요" << endl;
		}
	}
}

// 계좌에서 돈을 출금하는 함수
void WithdrawMoney()
{
	int id;
	int money;

	cout << "-------출금------" << endl;
	cout << "출금하실 계좌에 ID를 입력해주세요 : "; cin >> id;

	for (int i = 0; i < clientNunmber; i++)
	{
		if (id == account[clientNunmber]->GetaccID())
		{
			cout << "출금하실 금액을 입력해 주세요 : "; cin >> money;
			cout << "출금완료" << endl;
			account[i]->withdraw(money);

			return;
		}
		else
		{
			cout << "다시 입력해 주세요" << endl;
		}
	}
}

// 시스템내 존재하는 계좌들의 정보를 모두 출력.
void ShowAllClientInfo()
{
	for (int i = 0; i < clientNunmber; i++)
	{
		account[i]->showAll;
		cout << endl;
	}
}