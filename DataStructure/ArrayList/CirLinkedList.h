#pragma once
#include <iostream>
typedef int Data;

typedef struct _node
{
	Data data;
	struct _node* next;
} Node;

class CirLinkedList
{
private:
	Node* tail;
	Node* cur;
	Node* before;
	int numOfData;

public:
	CirLinkedList();
	~CirLinkedList();

	typedef CirLinkedList List;

	void ListInit(List* plist);
	void LInsert(List* plist, Data data);
	void LInsertFront(List* plist, Data data);
	
	int LFirst(List* plist, Data* pdata);
	int LNext(List* plist, Data* pdata);
	Data LRemove(List* plist);
	int LCount(List* plist);
};

