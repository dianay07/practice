#pragma once
#include "cMonster.h"
#include <vector>
class cFactory
{
private:
	cMonster* monster[20];

public:
	void Create();
	void Show();
	
	cFactory();
	~cFactory();
};

