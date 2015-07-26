#include "insertionSortList.h"

ListNode* Solution97::insertionSortList(ListNode* head) 
{
	//方法1:
	//if (head == NULL)
	//{
	//	return NULL;
	//}
	//ListNode* new_head = new ListNode(0);
	//new_head->next = head;
	//ListNode* tail = new_head;

	//ListNode* temp_node = NULL;
	//head = head->next;
	//tail->next->next = NULL;
	//while (head)
	//{
	//	temp_node = head->next;
	//	head->next = NULL;
	//	tail = new_head;
	//	while (tail->next)
	//	{
	//		if(tail->next->val > head->val)
	//		{
	//			ListNode* temp = tail->next;
	//			tail->next = head;
	//			head->next = temp;
	//			break;
	//		}
	//		tail = tail->next;
	//	}
	//	if(tail->next == NULL)
	//	{
	//		tail->next = head;
	//		head->next = NULL;
	//	}
	//	head = temp_node;
	//}
	//return new_head->next;

	//方法2：
	ListNode* new_head = new ListNode(0);
	new_head->next = head;
	ListNode* pre = new_head;
	ListNode* cur = head;

	while (cur)
	{
		if (cur->next && cur->val > cur->next->val)
		{
			while (pre->next && pre->next->val < cur->next->val)
			{
				pre = pre->next;
			}
			ListNode* temp = pre->next;
			pre->next = cur->next;
			cur->next = cur->next->next;
			pre->next->next = temp;
			pre = new_head;
		}
		else
		{
			cur = cur->next;
		}
	}
	ListNode* result = new_head->next;
	delete new_head;
	return result;
}