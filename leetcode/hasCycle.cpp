#include "hasCycle.h"

bool Solution99::hasCycle(ListNode *head) 
{
	if (head == NULL)
	{
		return false;
	}
	ListNode* fast = head;
	ListNode* slow = head;
	int flag = 0;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		return true;
	}
	return false;
}