#include"getIntersectionNode.h"

ListNode* Solution16::getIntersectionNode(ListNode *headA, ListNode *headB)
{
	int lengthA = 0;
	int lengthB = 0;
	ListNode *tempA = headA;
	ListNode *tempB = headB;
	while (tempA != NULL)
	{
		lengthA++;
		tempA = tempA->next;
	}

	while (tempB != NULL)
	{
		lengthB++;
		tempB = tempB->next;
	}
	if (lengthB == 0 || lengthA == 0)
	{
		return NULL;
	}
	int diff = lengthB - lengthA;
	tempA = headA;
	tempB = headB;
	if (diff >= 0)
	{
		while (diff--)
			tempB = tempB->next;
	}
	else
	{
		diff *= -1;
		while (diff--)
			tempA = tempA->next;
	}


	while (tempA != NULL)
	{
		if (tempA == tempB)
		{
			return tempA;
		}
		tempA = tempA->next;
		tempB = tempB->next;
	}
		
	return NULL;
}