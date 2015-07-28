#include "deleteDuplicates2.h"

ListNode* Solution101::deleteDuplicates(ListNode* head) 
{
	ListNode* new_head = new ListNode(0);
	new_head->next = head;
	ListNode* temp = new_head;
	ListNode* cur = head;
	int flag = 0;
	while (new_head && cur && new_head->next && cur->next)
	{
		flag = 0;
		if (cur->next->val == new_head->next->val )
		{
			while (cur->next)
			{
				if(cur->next->val != new_head->next->val)
				{
					new_head->next = cur->next;
					cur = cur->next;
					flag = 1;
					break;
				}
				cur = cur->next;
				if(cur->next == NULL)
				{
					new_head->next = NULL;
				}
			}
		}
		if (flag == 1)
		{
			continue;
		}
		new_head = new_head->next;
		cur = cur->next;
	}
	return temp->next;

	//ListNode* psuedo = new ListNode(0), *node = psuedo;
	//psuedo->next = head;
	//while (node->next)
	//	if (node->next->next && node->next->val == node->next->next->val) {
	//		while (node->next->next && node->next->val == node->next->next->val)
	//			node->next->next = node->next->next->next;
	//		node->next = node->next->next;
	//	} else
	//		node = node->next;
	//	return psuedo->next;
}