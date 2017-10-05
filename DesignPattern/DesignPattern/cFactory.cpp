#include "cFactory.h"
cFactory::cFactory()
{
}
cFactory::~cFactory()
{
}

void cFactory::Create()
{
	for (int i = 0; i < 20; i++)
	{
		monster[i] = new cMonster();
	}

	monster[0]->Create(Virus);

}

void cFactory::Show()
{
	cout << monster[0]->GetName() << endl;
	cout << monster[0]->GetType() << endl;
}