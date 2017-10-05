#include "oop1.h"
oop1::oop1()
{
}
oop1::~oop1()
{
}

void oop1::showMenu()
{
	cout << "----------∏ﬁ¥∫-------------" << endl;
	cout << "1. ∞Ë¡¬∞≥º≥ " << endl;
	cout << "2. ¿‘±› " << endl;
	cout << "3. √‚±› " << endl;
	cout << "4. ∞Ë¡¬¡§∫∏ ¿¸√º √‚∑¬" << endl;
	cout << "5. «¡∑Œ±◊∑• ¡æ∑·" << endl;
}

// ∞Ë¡¬ª˝º∫
void oop1::makeAccount()
{
	int id;
	char name[maxNameSpace];
	int money;

	cout << "[∞Ë¡¬∞≥º≥]" << endl;
	cout << "ID∏¶ ¿‘∑¬«ÿ¡÷ººø‰ : " << endl; cin >> id;
	cout << "¿Ã∏ß¿ª ¿‘∑¬«ÿ¡÷ººø‰ : " << endl; cin >> name;
	cout << "¿‘±›æ◊¿ª ¿‘∑¬«ÿ¡÷ººø‰ : " << endl; cin >> money;

	//πËø≠ø° ∞Ë¡¬¡§∫∏ ¿˙¿Â
	arr[havingAccount].ID = id;
	strcpy_s(arr[havingAccount].clientName, name);	// ¿Ø¿«;
	arr[havingAccount].stockMoney = money;

	//πËø≠¿ª ¿ß∑Œ
	havingAccount++;
}

// ¿‘±›
void oop1::depositMoney()
{
	int id;
	int money;

	cout << "∞Ë¡¬ ID∏¶ ¿‘∑¬«œººø‰." << endl;
	cin >> id;

	for (int i = 0; i < havingAccount; i++)
	{
		// ∞Ë¡¬ ID √º≈©
		if (arr[i].ID == id)
		{
			// ID¿« ¡÷¿Œ¿ª ∫∏ø©¡ÿ¥Ÿ
			cout << arr[i].clientName << endl;
			cout << arr[i].stockMoney << endl;

			// ¿‘±› ¿˝¬˜ ¡¯«‡
			cout << "¿‘±› «“ ±›æ◊¿ª ¿‘∑¬«ÿ¡÷ººø‰ : "; cin >> money;
			arr[i].stockMoney += money;
			cout << "¿‘±›øœ∑·" << endl;

			// ∞ËªÍ »ƒ ¡§ªÍ
			cout << arr[i].stockMoney << endl;
		}
	}
	
}

// ≠y±›
void oop1::takeMoney()
{
	int id;
	int money;

	cout << "∞Ë¡¬ ID∏¶ ¿‘∑¬«œººø‰." << endl;
	cin >> id;

	for (int i = 0; i < havingAccount; i++)
	{
		// ∞Ë¡¬ √º≈©
		if (arr[i].ID == id)
		{
			// ID¿« ¡÷¿Œ¿ª ∫∏ø©¡ÿ¥Ÿ
			cout << arr[i].clientName << endl;
			cout << arr[i].stockMoney << endl;

			cout << "√‚±› «“ ±›æ◊¿ª ¿‘∑¬«ÿ¡÷ººø‰ : "; cin >> money;

			if (money > arr[i].stockMoney)
			{
				cout << "¿‹æ◊∫∏¥Ÿ √‚±›æ◊¿Ã ≈Æ¥œ¥Ÿ. ¥ŸΩ√ ¿‘∑¬«ÿ¡÷ººø‰" << endl;
				cin >> money;
			}
			else
			{
				cout << "√‚±› µ«æ˙Ω¿¥œ¥Ÿ." << endl;
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
