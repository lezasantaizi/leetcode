#include "swapPairs.h"

ListNode* Solution92::swapPairs(ListNode* head)
{

	//����1������ֵ
	//ListNode* fast = head;
	//while(fast != NULL && fast->next != NULL)
	//{
	//	int temp = fast->val;
	//	fast->val = fast->next->val;
	//	fast->next->val = temp;
	//	fast = fast->next->next;
	//}
	//return head;

	//����2������ָ��
	ListNode* fast = head;
	ListNode* pre = new ListNode(0);
	ListNode* newHead = pre;
	pre->next = head;
	while(fast != NULL && fast->next != NULL)
	{
		pre->next = fast->next;
		ListNode* temp = fast->next->next;
		fast->next->next = fast;
		fast->next = temp;
		pre = fast;
		fast = temp;
	}
	return newHead->next; 
}