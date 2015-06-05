#include"deleteDuplicates.h"'

ListNode* Solution26::deleteDuplicates(ListNode* head)
{
	if (head == NULL)
		return NULL;
	int temp = head->val;
	ListNode* start = head;
	while (start->next != NULL)
	{
		if (temp == start->next->val)
		{
			start->next = start->next->next;
		}
		else
		{
			temp = start->next->val;
			start = start->next;
		}
	}
	return head;
}