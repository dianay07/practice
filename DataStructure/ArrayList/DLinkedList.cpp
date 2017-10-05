#include "DLinkedList.h"
LinkedList::LinkedList()
{
}
LinkedList::~LinkedList()
{
}

void LinkedList::ListInit(List * plist)
{
	// ���� ����� ����
	plist->head = new Node;
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->numOfData = 0;
}


void LinkedList::FInsert(List * plist, LData data)
{
	Node* newNode = new Node;			// �� ��� ����
	newNode->data = data;				// �� ��忡 ������ ����
	newNode->next = plist->head->next;	// �� ��尡 �ٸ� ��带 ����Ű�� ��
	plist->head->next = newNode;		// ���̳�尡 �� ��带 ����Ű�� ��

	(plist->numOfData)++;				// ����� ���
}

void LinkedList::SInsert(List* plist, LData data)
{
	Node* newNode = new Node;
	Node* pred = plist->head;
	newNode->data = data;

	// �� ��尡 �� ��ġ�� ã�� ���� �ݺ���
	// pred�� ����Ʈ�� ������ ��带 ����Ű���� ���´�.
	// �� �����Ϳ� pred�� ������忡 ����� �������� �켱������ ��
	// �� pred�� ������ ��带 ����Ű�°͵� �ƴϰ� �� �ڸ��� ���� ��ã�Ѵٸ� pred�� ��������
	while (pred->next != NULL && plist->comp(data, pred->next->data) != 0)
	{
		pred = pred->next;		// ���� ���� �̵�
	}
		
	newNode->next = pred->next;	// �� ����� �������� ����
	pred->next = newNode;		// �� ����� ������ ����

	(plist->numOfData)++;
}

void LinkedList::LInsert(List * plist, LData data)
{
	if (plist->comp == NULL)		// ���� ������ ���� x
		FInsert(plist, data);       // �Ӹ��� ��� �߰�
	else                            // ���� ������ ���� o 
		SInsert(plist, data);		// ���ı��ؿ� �ٰ��� ��带 �߰�
}

int LinkedList::LFirst(List * plist, LData * pdata)
{
	if (plist->head->next == NULL)		// ���� ��尡 NULL�� ����Ų�ٸ�
		return false;					// ��ȯ�� �����Ͱ� ����.

	plist->before = plist->cur;			// before�� ���� ��带 ����Ű��
	plist->cur = plist->cur->next;		// cur�� ù ��° ��带 ����Ű��

	*pdata = plist->cur->data;			// ù ��° ����� �����͸� ����
	return true;
}

int LinkedList::LNext(List * plist, LData * pdata)
{
	if (plist->cur->next == NULL)		// cur�� NULL�� ����Ű��
		return false;					// ��ȯ�� ������ x

	plist->before = plist->cur;			// cur�� ����Ű�� ���� before��
	plist->cur = plist->cur->next;		// cur�� cur�� ����������

	*pdata = plist->cur->data;			// cur�� ����Ű�� ����� ������ ����
	return true;
}

LData LinkedList::LRemove(List * plist)
{
	Node* rpos = plist->cur;			// ���� ����� �ּҸ� rpos�� ����
	LData rdata = rpos->data;			// ���� ����� �����͸� rdata�� ����

	plist->before->next = plist->cur->next;		// �Ҹ� ����� ����Ʈ���� ����
	plist->cur = plist->before;					// cur�� ����Ű�� ��ġ�� ����
	
	delete(rpos);								// ����Ʈ���� ���ŵ� ��� �Ҹ�
	(plist->numOfData)--;						// �������� �� ����
	return rdata;								// ���ŵ� ����� ������ ��ȯ
}

int LinkedList::LCount(List * plist)
{
	return plist->numOfData;
}

void LinkedList::SetSortRule(List * plist, int(*comp)(LData d1, LData d2))
{
	plist->comp = comp; 
	// ������ ���� = comp�� ���� ����ؾߵȴ�.
}
