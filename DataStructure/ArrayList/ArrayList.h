#pragma once
#include <iostream>
#define TRUE 1
#define FALSE 0
#define LIST_LEN 100
typedef int LData;				// LDATA에 대한 typedef 선언
class ArrayList
{
private:
	LData arr[LIST_LEN];		// 리스트의 저장장소
	int numOfData;				// 저장된 데이터의 갯수
	int curPosition;			// 데이터 참조위치를 기록

public:
	ArrayList();
	~ArrayList();

	typedef ArrayList List;

	void ListInit(List* plist);
	void LInSert(List* plist, LData data);

	int ListFirst(List* plist, LData* pdata);
	int ListNext(List* plist, LData* pdata);	

	LData LRemove(List* plist);
    int LCount(List* plist);

};


// 배열 리스트의 '장점'
//  - 랜덤 엑세스가 가능 ( 아무 위치에서 데이터를 불러올수있다.)

// ' 단점 ' 
//  - 데이터의 이동과 복사가 많이 일어남.

