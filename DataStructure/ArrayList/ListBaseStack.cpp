#include "ListBaseStack.h"
ListBaseStack::ListBaseStack()
{
}
ListBaseStack::~ListBaseStack()
{
}

void ListBaseStack::StackInit(Stack * pstack)
{
	pstack->head = NULL;
}

int ListBaseStack::SIsEmpty(Stack * pstack)
{
	if (pstack->head == NULL)
		return true;
	else
		return false;
}

void ListBaseStack::SPush(Stack * pstack, Data data)
{
	Node* newNode = new Node;

	newNode->data = data;
	newNode->next = pstack->head;

	pstack->head = newNode;
}

Data ListBaseStack::SPop(Stack * pstack)
{
	Data rdata;
	Node* rnode;

	if (SIsEmpty(pstack))
	{
		exit(-1);
	}

	rdata = pstack->head->data;
	rnode = pstack->head;

	pstack->head = pstack->head->next;
	delete(rnode);

	return rdata;
}

Data ListBaseStack::SPeek(Stack * pstack)
{
	if (SIsEmpty(pstack))
	{
		exit(-1);
	}

	return pstack->head->data;
}
