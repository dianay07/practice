#include "cMonster.h"
cMonster::cMonster()
{
}
cMonster::~cMonster()
{
}

void cMonster::SetName(string name)
{
	m_name = name;
}
string cMonster::GetName()
{
	return m_name;
}

void cMonster::SetType(Type type)
{
	m_type = type;
}

Type cMonster::GetType()
{
	return m_type;
}

void cMonster::Create(Type type)
{
	switch (type)
	{
	case Virus:
		m_name = "아구몬";
		m_type = Virus;
		break;
	case Vaccine:
		m_name = "파피몬";
		m_type = Vaccine;
		break;
	case Data:
		m_name = "텐타몬";
		m_type = Data;
		break;
	default:
		break;
	}
}