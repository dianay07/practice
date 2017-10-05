#include <string>
#include <iostream>
using namespace std;

void HanoiTowerMove(int num, char from, char by, char to)
{
	if (num == 1)
	{
		cout << "���� 1�� " << from << " ���� " << to << " �� �̵�" << endl;
	}
	else
	{
		HanoiTowerMove(num - 1, from, to, by);
		cout << "���� " << num << " ��" << from << " ���� " << to << " �� �̵�" << endl;
		HanoiTowerMove(num - 1, by, from, to);
	}
}

int main()
{
	// 3���� ������ A���� B�� ������ C�� �����̱�
	HanoiTowerMove(5, 'A', 'B', 'C');
	return 0;

}