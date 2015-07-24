#include "rotateRight.h"

ListNode* Solution93::rotateRight(ListNode* head, int k)
{
	if (head == NULL)
	{
		return NULL;
	}
	ListNode* new_head = head;

	int list_length = 0;
	while (new_head)
	{
		new_head = new_head->next;
		list_length++;
	}

	int num = 0;
	new_head = head;
	ListNode* tail = head;
	while (new_head->next)
	{
		new_head = new_head->next;
		num++;
		if (num > k%list_length)
		{
			tail = tail->next;
		}
	}
	if(num >= k%list_length)
	{
		new_head->next = head;
		new_head = tail->next;
		tail->next = NULL;
		return new_head;
	}
	else
	{
		return head;
	}

}