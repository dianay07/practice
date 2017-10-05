#include <string>
#include <iostream>
using namespace std;

void HanoiTowerMove(int num, char from, char by, char to)
{
	if (num == 1)
	{
		cout << "원반 1을 " << from << " 에서 " << to << " 로 이동" << endl;
	}
	else
	{
		HanoiTowerMove(num - 1, from, to, by);
		cout << "원반 " << num << " 을" << from << " 에서 " << to << " 로 이동" << endl;
		HanoiTowerMove(num - 1, by, from, to);
	}
}

int main()
{
	// 3개의 원반을 A에서 B를 경유해 C로 움직이기
	HanoiTowerMove(5, 'A', 'B', 'C');
	return 0;

}