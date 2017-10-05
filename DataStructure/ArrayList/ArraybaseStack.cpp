#include "ArraybaseStack.h"
ArraybaseStack::ArraybaseStack()
{
}
ArraybaseStack::~ArraybaseStack()
{
}

void ArraybaseStack::StackInit(Stack * pstack)
{
	pstack->topIndex = -1;
}

int ArraybaseStack::SIsEmpty(Stack * pstack)
{
	if (pstack->topIndex == -1)
		return true;
	else
		return false;
}

void ArraybaseStack::SPush(Stack * pstack, Data data)
{
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}

Data ArraybaseStack::SPop(Stack * pstack)
{
	int rIdx;

	if (SIsEmpty(pstack))
	{
		exit(-1);
	}

	rIdx = pstack->topIndex;
	pstack->topIndex -= 1;

	return pstack->stackArr[rIdx];
}

Data ArraybaseStack::SPeek(Stack * pstack)
{
	if (SIsEmpty(pstack))
	{
		exit(-1);
	}
	
	return pstack->stackArr[pstack->topIndex];
}
 