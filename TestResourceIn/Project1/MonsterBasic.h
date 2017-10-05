#pragma once
#include <list>
class MonsterBasic
{
	//Ÿ�� ����
	enum TypeValue
	{
		//������    //���̷���     //���
		Data = 0,   Virus = 1,     Vaccine = 2
	};						      

	enum EvolveLevel
	{
		//�����      //�����	      //������	     //����ü  
		Baby = 0 ,    amature = 1,    mature = 2,    ultimate = 3 
	};

	struct DigitalMonster
	{
		const char* name;		// �̸�
		TypeValue type;			// Ÿ��
		EvolveLevel level;		// ��ȭ�ܰ�
	};

private:

	std::list<DigitalMonster> MonsterList;

public:

	//�Լ�
	void showMonsterValue(const std::list<DigitalMonster> &MonsterList);

	MonsterBasic();
	~MonsterBasic();
};

