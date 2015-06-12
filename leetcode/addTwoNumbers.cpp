#include "addTwoNumbers.h"

ListNode* Solution43::addTwoNumbers(ListNode* l1, ListNode* l2) 
{
	int carry = 0;
	if (l1 == NULL)
	{
		return l2;
	}
	else if(l2 == NULL)
	{
		return l1;
	}
	ListNode* first = l1;
	ListNode* second = l2;
	while (1)
	{
		int temp = first->val+ second->val+carry;
		if (temp >= 10)
		{
			carry = 1;
			temp -= 10;
		}
		else
			carry = 0;
		first->val = temp;
		if(first->next == NULL ||second->next ==NULL)
			break;
		first = first->next;
		second = second->next;
	}
	if (first->next == NULL)
	{
		second = second->next;
		while (second)
		{
			ListNode *node = new ListNode(second->val);
			//ListNode node(second->val);
			int temp = node->val+ carry;
			if (temp >= 10)
			{
				carry = 1;
				temp -= 10;
			}
			else
				carry = 0;
			node->val = temp;
			first->next = node;
			first = first->next;
			second= second->next;
		}
	}
	else
	{
		while (first->next)
		{
			int temp = first->next->val+ carry;
			if (temp >= 10)
			{
				carry = 1;
				temp -= 10;
			}
			else
				carry = 0;
			first->next->val = temp;
			first = first->next;
		}
	}
	if (carry)
	{

		ListNode *node = new ListNode(carry);
		first->next = node;
	}
	return l1;

	//int carry = 0;
	//ListNode* first = l1;
	//ListNode* second = l2;
	//ListNode head(0);
	//ListNode* index = &head;
	//while (first || second)
	//{

	//	int firstNum = first != NULL ? first->val : 0;
	//	int secNum = second != NULL ? second->val : 0;

	//	int temp = firstNum+secNum+ carry;
	//	if (temp >= 10)
	//	{
	//		carry = 1;
	//		temp -= 10;
	//	}
	//	else
	//		carry = 0;
	//	ListNode *node = new ListNode(temp);
	//	node->next = NULL;
	//	index->next = node;
	//	index = index->next;
	//	if (first)
	//	first = first->next;
	//	if (second)
	//	second= second->next;
	//}
	//if (carry)
	//{
	//	ListNode *node = new ListNode(carry);
	//	index->next = node;
	//	node->next = NULL;
	//}
	//return head.next;
}