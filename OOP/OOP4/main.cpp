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
			cout << "�ٽ� �ٽ�" << endl;
			break;
		}
	}

	return 0;
}

// �޴��� �����ִ� �Լ�
void ShowMenu()
{
	cout << "-------------�޴�----------------" << endl;
	cout << "1. ���� ���� " << endl;
	cout << "2. �Ա� " << endl;
	cout << "3. ��� " << endl;
	cout << "4. ��� ������ ���" << endl;
}

// ���¸� ����� �Լ�
void MakeAccont()
{
	int id;
	int money;
	char name[nameSpaceLimit];

	cout << "--------���� ����--------" << endl;
	cout << "����Ͻ� ID�� �Է����ּ��� : "; cin >> id;
	cout << "�������� �̸��� �Է����ּ��� : "; cin >> name;
	cout << "���¿� �Ա��� �ݾ��� �Է��� �ּ��� : "; cin >> money;

	account[clientNunmber] = new BankingSystem(id, money, name);
	clientNunmber++;
}

// ���¿� ���� �Ա��ϴ� �Լ�
void DepositMoney()
{
	int id;
	int money;

	cout << "-------�Ա�------" << endl;
	cout << "�Ա��Ͻ� ���¿� ID�� �Է����ּ��� : "; cin >> id;

	for (int i = 0; i < clientNunmber; i++)
	{
		if (id == account[clientNunmber]->GetaccID)
		{
			cout << "�Ա��Ͻ� �ݾ��� �Է��� �ּ��� : "; cin >> money;
			cout << "�ԱݿϷ�" << endl;
			account[i]->deposit(money);

			return;
		}
		else
		{
			cout << "�ٽ� �Է��� �ּ���" << endl;
		}
	}
}

// ���¿��� ���� ����ϴ� �Լ�
void WithdrawMoney()
{
	int id;
	int money;

	cout << "-------���------" << endl;
	cout << "����Ͻ� ���¿� ID�� �Է����ּ��� : "; cin >> id;

	for (int i = 0; i < clientNunmber; i++)
	{
		if (id == account[clientNunmber]->GetaccID())
		{
			cout << "����Ͻ� �ݾ��� �Է��� �ּ��� : "; cin >> money;
			cout << "��ݿϷ�" << endl;
			account[i]->withdraw(money);

			return;
		}
		else
		{
			cout << "�ٽ� �Է��� �ּ���" << endl;
		}
	}
}

// �ý��۳� �����ϴ� ���µ��� ������ ��� ���.
void ShowAllClientInfo()
{
	for (int i = 0; i < clientNunmber; i++)
	{
		account[i]->showAll;
		cout << endl;
	}
}