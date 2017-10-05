#pragma once
#include "cMonsterInfo.h"
class cMonster :
	public cMonsterInfo
{
public:
	void SetName(string name) override;
	string GetName() override;
	void SetType(Type type) override;
	Type GetType() override;

	void Create(Type type);

	cMonster();
	~cMonster();
};

