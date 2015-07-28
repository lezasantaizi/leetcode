#include "detectCycle.h"

ListNode *Solution100::detectCycle(ListNode *head) 
{
	//方法1：
	//ListNode* fast = head;
	//ListNode* slow = head;
	//int flag = 0;
	//while (fast && fast->next)
	//{
	//	if(flag == 0)
	//		fast = fast->next->next;
	//	else
	//		fast = fast->next;
	//	slow = slow->next;
	//	if (slow == fast )
	//	{
	//		if(fast != head)
	//		{
	//			if(flag == 0)
	//			{
	//				flag = 1;
	//				slow = head;
	//			}
	//			else
	//			{
	//				return slow;
	//			}
	//		}
	//		else
	//		{
	//			return slow;
	//		}
	//	}

	//}
	//return NULL;

	//方法2：
	ListNode* slow = head;
	ListNode* fast = head;
	while (fast && fast->next){
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast){
			slow = head;
			while (slow != fast){
				slow = slow->next;
				fast = fast->next;
			}
			return slow;
		}
	}
	return nullptr;
}