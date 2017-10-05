#include "ArrayList.h"
ArrayList::ArrayList()
{
}
ArrayList::~ArrayList()
{
}

void ArrayList::ListInit(List * plist)
{
	plist->curPosition = 0;					// ����Ʈ�� ����� ������ 0��
	plist->numOfData = -1;					// ���� �ƹ��͵� ����Ű�� ���� �ʴ�.
}

void ArrayList::LInSert(List * plist, LData data)
{
	if (plist->numOfData >= LIST_LEN)		// ��������� ���ڸ��ٸ�
	{
		return;
	}

	plist->arr[plist->numOfData] = data;	// �ȱ׷��� ����
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

