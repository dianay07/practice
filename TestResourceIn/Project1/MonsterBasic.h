#pragma once
#include <list>
class MonsterBasic
{
	//타입 설정
	enum TypeValue
	{
		//데이터    //바이러스     //백신
		Data = 0,   Virus = 1,     Vaccine = 2
	};						      

	enum EvolveLevel
	{
		//유년기      //성장기	      //성숙기	     //완전체  
		Baby = 0 ,    amature = 1,    mature = 2,    ultimate = 3 
	};

	struct DigitalMonster
	{
		const char* name;		// 이름
		TypeValue type;			// 타입
		EvolveLevel level;		// 진화단계
	};

private:

	std::list<DigitalMonster> MonsterList;

public:

	//함수
	void showMonsterValue(const std::list<DigitalMonster> &MonsterList);

	MonsterBasic();
	~MonsterBasic();
};

