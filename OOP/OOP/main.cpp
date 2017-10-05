#include "oop1.h"

int main()
{
	oop1* func = new oop1();
	int select;
	
	while (1)
	{		
		//메뉴 일단 보여주고
		func->showMenu();
		cout << "선택" << endl;
		cin >> select;

		switch (select)
		{
		case MAKE:
			func->makeAccount();
			break;
		case DEPOSIT:
			func->depositMoney();
			break;
		case WITHDRAW:
			func->takeMoney();
			break;
		case SHOW:
			func->showAllClientInfo();
			break;
		case MENU:
			func->showMenu();
			break;
		case END:
			return 0;
		default:
			cout << "똑바로 하세양" << endl;
		}
	}

	return 0;
}