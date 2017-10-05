#include "DLinkedList.h"
LinkedList::LinkedList()
{
}
LinkedList::~LinkedList()
{
}

void LinkedList::ListInit(List * plist)
{
	// 더미 노드의 생성
	plist->head = new Node;
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->numOfData = 0;
}


void LinkedList::FInsert(List * plist, LData data)
{
	Node* newNode = new Node;			// 새 노드 생성
	newNode->data = data;				// 새 노드에 데이터 저장
	newNode->next = plist->head->next;	// 새 노드가 다른 노드를 가리키게 함
	plist->head->next = newNode;		// 더미노드가 새 노드를 가르키게 함

	(plist->numOfData)++;				// 저장된 노드
}

void LinkedList::SInsert(List* plist, LData data)
{
	Node* newNode = new Node;
	Node* pred = plist->head;
	newNode->data = data;

	// 새 노드가 들어갈 위치를 찾기 위한 반복문
	// pred가 리스트의 마지막 노드를 가리키는지 묻는다.
	// 새 데이터와 pred의 다음노드에 저장된 데이터의 우선순위를 비교
	// 즉 pred가 마지막 노드를 가리키는것도 아니고 들어갈 자리도 아직 못찾앗다면 pred를 다음노드로
	while (pred->next != NULL && plist->comp(data, pred->next->data) != 0)
	{
		pred = pred->next;		// 다음 노드로 이동
	}
		
	newNode->next = pred->next;	// 새 노드의 오른쪽을 연결
	pred->next = newNode;		// 새 노드의 왼쪽을 연결

	(plist->numOfData)++;
}

void LinkedList::LInsert(List * plist, LData data)
{
	if (plist->comp == NULL)		// 정렬 기준이 마련 x
		FInsert(plist, data);       // 머리에 노드 추가
	else                            // 정렬 기준이 마련 o 
		SInsert(plist, data);		// 정렬기준에 근거해 노드를 추가
}

int LinkedList::LFirst(List * plist, LData * pdata)
{
	if (plist->head->next == NULL)		// 더미 노드가 NULL을 가리킨다면
		return false;					// 변환할 데이터가 없다.

	plist->before = plist->cur;			// before는 더미 노드를 가리키게
	plist->cur = plist->cur->next;		// cur는 첫 번째 노드를 가리키게

	*pdata = plist->cur->data;			// 첫 번째 노드의 데이터를 전달
	return true;
}

int LinkedList::LNext(List * plist, LData * pdata)
{
	if (plist->cur->next == NULL)		// cur이 NULL을 가리키면
		return false;					// 반환할 데이터 x

	plist->before = plist->cur;			// cur이 가리키던 것을 before로
	plist->cur = plist->cur->next;		// cur을 cur의 다음것으로

	*pdata = plist->cur->data;			// cur이 가리키는 노드의 데이터 전달
	return true;
}

LData LinkedList::LRemove(List * plist)
{
	Node* rpos = plist->cur;			// 지울 대상의 주소를 rpos에 저장
	LData rdata = rpos->data;			// 지울 대상의 데이터를 rdata에 저장

	plist->before->next = plist->cur->next;		// 소멸 대상을 리스트에서 제거
	plist->cur = plist->before;					// cur이 가리키는 위치를 변경
	
	delete(rpos);								// 리스트에서 제거된 노드 소멸
	(plist->numOfData)--;						// 데이터의 수 감소
	return rdata;								// 제거된 노드의 데이터 반환
}

int LinkedList::LCount(List * plist)
{
	return plist->numOfData;
}

void LinkedList::SetSortRule(List * plist, int(*comp)(LData d1, LData d2))
{
	plist->comp = comp; 
	// 정렬의 기준 = comp는 따로 등록해야된다.
}
