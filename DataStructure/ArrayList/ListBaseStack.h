#pragma once
#include <iostream>
typedef int Data;

typedef struct _node
{
	Data data;
	struct _node* next;
}Node;

class ListBaseStack
{
private:
	Node* head;
public:
	ListBaseStack();
	~ListBaseStack();

	typedef ListBaseStack Stack;

	void StackInit(Stack* pstack);
	int SIsEmpty(Stack* pstack);

	void SPush(Stack* pstack, Data data);
	Data SPop(Stack* pstack);
	Data SPeek(Stack* pstack);
};

