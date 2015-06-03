#include "mergeTwoLists.h"

ListNode* Solution24::mergeTwoLists(ListNode* l1, ListNode* l2)
{

	if (l1 ==NULL)
	{
		return l2;
	}
	if (l2 ==NULL)
	{
		return l1;
	}
	ListNode* head;

	if (l1->val >= l2->val)
	{
		head->next = l2;
		l2 = l2->next;
	}
	else
	{
		head->next = l1;
		l1 = l1->next;
	}
	ListNode* cur = head;
	while (l1 && l2)
	{
		if (l1->val >= l2->val)
		{
			cur->next = l2;
			l2 = l2->next;
		}
		else
		{
			cur->next = l1;
			l1 = l1->next;
		}
		cur = cur->next;
	}
	if (l1 == NULL)
	{
		cur->next = l2;
	}
	else
	{
		cur->next = l1;
	}
	return head;

}