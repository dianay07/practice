#include "ArrayList.h"
ArrayList::ArrayList()
{
}
ArrayList::~ArrayList()
{
}

void ArrayList::ListInit(List * plist)
{
	plist->curPosition = 0;					// 리스트에 저장된 갯수는 0개
	plist->numOfData = -1;					// 현재 아무것도 가르키고 있지 않다.
}

void ArrayList::LInSert(List * plist, LData data)
{
	if (plist->numOfData >= LIST_LEN)		// 저장공간이 모자르다면
	{
		return;
	}

	plist->arr[plist->numOfData] = data;	// 안그러면 저장
	plist->numOfData++;
}

int ArrayList::ListFirst(List * plist, LData * pdata)
{
	if (plist->numOfData == 0)
		return FALSE;

	plist->curPosition = 0;
	*pdata = plist->arr[0];
	return TRUE;
}

int ArrayList::ListNext(List * plist, LData * pdata)
{
	if (plist->curPosition >= (plist->numOfData) - 1)
		return FALSE;

	(plist->curPosition)++;
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}


LData ArrayList::LRemove(List * plist)
{
	int rpos = plist->curPosition;
	int num = plist->numOfData;
	int i;
	LData rdata = plist->arr[rpos];

	for (i = rpos; i < num - 1; i++)
		plist->arr[i] = plist->arr[i + 1];

	plist->numOfData--;
	plist->curPosition--;
	return rdata;
}

int ArrayList::LCount(List * plist)
{
	return plist->numOfData;
}

