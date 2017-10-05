#include "CirLinkedList.h"
CirLinkedList::CirLinkedList()
{
}
CirLinkedList::~CirLinkedList()
{
}

//리스트 생성
void CirLinkedList::ListInit(List * plist)
{
	plist->tail = NULL;
	plist->cur = NULL;
	plist->before = NULL;
	plist->numOfData = 0;
}

//리스트에 꼬리부분에 정보 입력
void CirLinkedList::LInsert(List * plist, Data data)
{
	Node* newNode = new Node;
	newNode->data = data;

	if (plist->tail == NULL)
	{
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else
	{
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
		plist->tail = newNode;
	}

	(plist->numOfData)++;
}

void CirLinkedList::LInsertFront(List * plist, Data data)
{
	Node* newNode = new Node;
	newNode->data = data;

	if (plist->tail == NULL)
	{
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else
	{
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
	}

	(plist->numOfData)++;
}

int CirLinkedList::LFirst(List * plist, Data * pdata)
{
	if (plist->tail == NULL)
		return false;

	plist->before = plist->tail;
	plist->cur = plist->tail->next;

	*pdata = plist->cur->data;
	return true;
}

int CirLinkedList::LNext(List * plist, Data * pdata)
{
	if (plist->tail == NULL)
		return false;

	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return true ;
}

Data CirLinkedList::LRemove(List * plist)
{
	Node* rpos = plist->cur;
	Data rdata = rpos->data;

	if (rpos == plist->tail)
	{
		if (plist->tail == plist->tail->next)
			plist->tail = NULL;
		else
			plist->tail = plist->before;
	}

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	delete(rpos);
	(plist->numOfData)--;
	return rdata;
}

int CirLinkedList::LCount(List * plist)
{
	return plist->numOfData;
}
