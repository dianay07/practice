#pragma once
#include <string>
#include <iostream>
using namespace std;

enum Type
{
	Virus = 0, Vaccine = 1, Data = 2
};

class cMonsterInfo
{
protected:
	string m_name;
	Type m_type;

public:
	virtual void SetName(string name) = 0;
	virtual string GetName() = 0;
	virtual void SetType(Type type) = 0;
	virtual Type GetType() = 0;

	cMonsterInfo();
	~cMonsterInfo();
};

