#pragma once
#include <iostream>
#define TRUE 1
#define FALSE 0
#define LIST_LEN 100
typedef int LData;				// LDATA�� ���� typedef ����
class ArrayList
{
private:
	LData arr[LIST_LEN];		// ����Ʈ�� �������
	int numOfData;				// ����� �������� ����
	int curPosition;			// ������ ������ġ�� ���

public:
	ArrayList();
	~ArrayList();

	typedef ArrayList List;

	void ListInit(List* plist);
	void LInSert(List* plist, LData data);

	int ListFirst(List* plist, LData* pdata);
	int ListNext(List* plist, LData* pdata);	

	LData LRemove(List* plist);
    int LCount(List* plist);

};


// �迭 ����Ʈ�� '����'
//  - ���� �������� ���� ( �ƹ� ��ġ���� �����͸� �ҷ��ü��ִ�.)

// ' ���� ' 
//  - �������� �̵��� ���簡 ���� �Ͼ.

