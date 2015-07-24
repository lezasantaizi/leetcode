#include "swapPairs.h"

ListNode* Solution92::swapPairs(ListNode* head)
{

	//方法1，交换值
	//ListNode* fast = head;
	//while(fast != NULL && fast->next != NULL)
	//{
	//	int temp = fast->val;
	//	fast->val = fast->next->val;
	//	fast->next->val = temp;
	//	fast = fast->next->next;
	//}
	//return head;

	//方法2：交换指针
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