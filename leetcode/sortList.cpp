#include "sortList.h"

ListNode* merge_list(ListNode* head,ListNode* median)
{
	ListNode* temp_node = new ListNode(0);
	ListNode* result = temp_node;
	while (head || median)
	{
		if (head && (median== NULL ||(head->val <= median->val)) )
		{
			result->next = head;
			head = head->next;
			result = result->next;

		}
		if(median && (head == NULL || (head->val > median->val)))
		{
			result->next = median;
			median = median->next;
			result = result->next;
		}
	}
	return temp_node->next;
}

ListNode* Solution89::sortList(ListNode* head) 
{
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	ListNode* fast = head->next;
	ListNode* slow = head;
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	ListNode* median_node = slow->next;
	slow->next = NULL;
	return merge_list(sortList(head),sortList(median_node));
}