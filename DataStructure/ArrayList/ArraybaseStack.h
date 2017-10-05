#pragma once
#include <iostream>
typedef int Data;

class ArraybaseStack
{
private:
	Data stackArr[100];
	int topIndex;

public:
	ArraybaseStack();
	~ArraybaseStack();

	typedef ArraybaseStack Stack;
	
	void StackInit(Stack* pstack);
	int SIsEmpty(Stack* pstack);

	void SPush(Stack* pstack, Data data);
	Data SPop(Stack* pstack);
	Data SPeek(Stack* pstack);
};

