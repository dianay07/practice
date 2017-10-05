#include "DBLinkedList.h"
DBLinkedList::DBLinkedList()
{
}
DBLinkedList::~DBLinkedList()
{
}

void DBLinkedList::ListInit(List * plist)
{
	plist->head = NULL;
	plist->numOfData = 0;
}

void DBLinkedList::LInsert(List * plist, Data pdata)
{
	Node* newNode = new Node;
	newNode->data = pdata;

	newNode->next = plist->head;
	
	if (plist->head != NULL)
		plist->head->prev = newNode;

	newNode->prev = NULL;
	plist->head = newNode;

	(plist->numOfData)++;
}

int DBLinkedList::LFirst(List * plist, Data * pdata)
{
	if (plist->head == NULL)
		return false;

	plist->cur = plist->head;
	*pdata = plist->cur->data;

	return true;
}

int DBLinkedList::LNext(List * plist, Data * pdata)
{
	if (plist->cur->next == NULL)
		return false;

	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;

	return true;
}

int DBLinkedList::LPrevious(List * plist, Data * pdata)
{
	if (plist->cur->prev == NULL)
		return false;

	plist->cur = plist->cur->prev;
	*pdata = plist->cur->data;

	return true;
}

int DBLinkedList::LCount(List * plist)
{
	return plist->numOfData;
}
