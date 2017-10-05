#pragma once
#include <iostream>
typedef int Data;

//����� ���� ����Ʈ
typedef struct _node
{
	Data data;
	struct _node* next;
	struct _node* prev;
} Node;

class DBLinkedList
{
private:
	Node* head;
	Node* cur;
	int numOfData;
public:
	DBLinkedList();
	~DBLinkedList();

	typedef DBLinkedList List;

	void ListInit(List* plist);
	void LInsert(List* plist, Data pdata);
	
	int LFirst(List* plist, Data* pdata);
	int LNext(List* plist, Data* pdata);
	int LPrevious(List* plist, Data* pdata);
	int LCount(List* plist);
};

