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
		m_name = "�Ʊ���";
		m_type = Virus;
		break;
	case Vaccine:
		m_name = "���Ǹ�";
		m_type = Vaccine;
		break;
	case Data:
		m_name = "��Ÿ��";
		m_type = Data;
		break;
	default:
		break;
	}
}