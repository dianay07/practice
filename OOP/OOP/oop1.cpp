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
	cout << "1. ���� ����" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void OOP1::makeAccount()
{
	cout << "�����ָ� : ";
	cin >> bankUser[accNum].userName;
	cout << "ID : ";
	cin >> bankUser[accNum].ID;
	cout << "�ʱ� �Աݾ� :";
	cin >> bankUser[accNum].money;
	accNum++;
}

void OOP1::deposit()
{
	int id, money;
	cout << "ID�� �Է� :";
	cin >> id;

	for (int i = 0; i < accNum; i++)
	{
		if (id == bankUser[accNum].ID)
		{
			cout << "�Ա��� �ݾ� :";
			cin >> money;
			money += bankUser[accNum].money;
			cout << "�Ա� �Ϸ�" << endl;
		}
		else
		{
			cout << "���°� �������� �ʴ´�" << endl;
		}
	}
}

void OOP1::withdraw()
{
}
