#pragma once
#include <iostream>
typedef int LData;

typedef struct _node
{
	LData data;
	struct _node* next;
} Node;

class LinkedList
{
private:
	Node* head;
	Node* cur;
	Node* before;
	int numOfData;
	int(*comp)(LData d1, LData d2);

public:
	LinkedList();
	~LinkedList();

	typedef LinkedList List;

	void ListInit(List* plist);

	void LInsert(List* plist, LData data);

	int LFirst(List* plist, LData* pdata);
	int LNext(List* plist, LData* pdata);

	LData LRemove(List* plist);
	int LCount(List* plist);

	void SetSortRule(List* plist, int(*comp)(LData d1, LData d2));

private:
	void FInsert(List* plist, LData data);
	void SInsert(List* plist, LData data);
};


