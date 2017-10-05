#include "oop1.h"
oop1::oop1()
{
}
oop1::~oop1()
{
}

void oop1::showMenu()
{
	cout << "----------�޴�-------------" << endl;
	cout << "1. ���°��� " << endl;
	cout << "2. �Ա� " << endl;
	cout << "3. ��� " << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

// ���»���
void oop1::makeAccount()
{
	int id;
	char name[maxNameSpace];
	int money;

	cout << "[���°���]" << endl;
	cout << "ID�� �Է����ּ��� : " << endl; cin >> id;
	cout << "�̸��� �Է����ּ��� : " << endl; cin >> name;
	cout << "�Աݾ��� �Է����ּ��� : " << endl; cin >> money;

	//�迭�� �������� ����
	arr[havingAccount].ID = id;
	strcpy_s(arr[havingAccount].clientName, name);	// ����;
	arr[havingAccount].stockMoney = money;

	//�迭�� ����
	havingAccount++;
}

// �Ա�
void oop1::depositMoney()
{
	int id;
	int money;

	cout << "���� ID�� �Է��ϼ���." << endl;
	cin >> id;

	for (int i = 0; i < havingAccount; i++)
	{
		// ���� ID üũ
		if (arr[i].ID == id)
		{
			// ID�� ������ �����ش�
			cout << arr[i].clientName << endl;
			cout << arr[i].stockMoney << endl;

			// �Ա� ���� ����
			cout << "�Ա� �� �ݾ��� �Է����ּ��� : "; cin >> money;
			arr[i].stockMoney += money;
			cout << "�ԱݿϷ�" << endl;

			// ��� �� ����
			cout << arr[i].stockMoney << endl;
		}
	}
	
}

// �y��
void oop1::takeMoney()
{
	int id;
	int money;

	cout << "���� ID�� �Է��ϼ���." << endl;
	cin >> id;

	for (int i = 0; i < havingAccount; i++)
	{
		// ���� üũ
		if (arr[i].ID == id)
		{
			// ID�� ������ �����ش�
			cout << arr[i].clientName << endl;
			cout << arr[i].stockMoney << endl;

			cout << "��� �� �ݾ��� �Է����ּ��� : "; cin >> money;

			if (money > arr[i].stockMoney)
			{
				cout << "�ܾ׺��� ��ݾ��� Ů�ϴ�. �ٽ� �Է����ּ���" << endl;
				cin >> money;
			}
			else
			{
				cout << "��� �Ǿ����ϴ�." << endl;
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
