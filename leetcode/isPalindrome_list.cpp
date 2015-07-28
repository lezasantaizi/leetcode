#include "isPalindrome_list.h"

bool Solution102::isPalindrome(ListNode* head) 
{
	if (head == NULL)
	{
		return true;
	}
	int node_len = 0;
	ListNode* new_head = head;
	while (new_head)
	{
		node_len++;
		new_head = new_head->next;
	}
	new_head = head;
	for (int i = 0;i < (node_len-1)/2;i++)
	{
		new_head = new_head->next;
	}
	//reverse the rest
	ListNode* cur = new_head->next;
	ListNode* median = new_head;
	new_head = NULL;
	while (cur)
	{
		ListNode* temp = cur->next;
		cur->next = new_head;
		new_head = cur;
		cur = temp;
	}
	median->next = new_head;
	new_head = head;
	for (int i = 0;i <(node_len+1)/2;i++)
	{
		new_head = new_head->next;
	}
	while (new_head)
	{
		if (head->val != new_head->val)
		{
			return false;
		}
		head = head->next;
		new_head = new_head->next;
	}
	return true;
}