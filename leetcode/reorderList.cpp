#include "reorderList.h"

void Solution103::reorderList(ListNode* head) 
{
	if (head == NULL)
	{
		return;
	}
	//split,这地方以为是间隔一个抽出来，成为两组；题意理解错了
	//ListNode* new_head = head->next;
	//ListNode* fast = head->next;
	//ListNode* slow = head;
	//while (slow && slow->next)
	//{
	//	slow->next = fast->next;
	//	slow = fast;
	//	fast = fast->next;
	//}

	ListNode* new_head = NULL;
	ListNode* fast = head;
	ListNode* slow = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	new_head = slow;

	//reverse
	ListNode* temp = NULL;
	while (new_head)
	{
		ListNode* temp_node = new_head->next;
		new_head->next = temp;
		temp = new_head;
		new_head = temp_node;
	}
	new_head = temp;

	//merge
	slow = head;
	while (slow)
	{
		ListNode* temp = slow->next;
		slow->next = new_head;
		slow = new_head;
		new_head = temp;
	}
}