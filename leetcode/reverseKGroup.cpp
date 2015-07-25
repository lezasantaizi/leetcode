#include "reverseKGroup.h"

ListNode* Solution94::reverseKGroup(ListNode* head, int k) 
{
	ListNode* trunk_head = new ListNode(0);
	trunk_head->next = head;
	ListNode* trunk_tail = trunk_head;
	ListNode* new_head = NULL;
	ListNode* new_tail = NULL;
	ListNode* cur = head;

	ListNode* fast = head;
	int cnt_for_k = 0;
	while (fast)
	{
		cnt_for_k++;
		fast = fast->next;
		if (k == cnt_for_k)
		{	
			while (cnt_for_k)
			{
				head = cur->next;
				cur->next = new_head;
				new_head = cur;
				cur = head;
				if (cnt_for_k == k)
				{
					new_tail = new_head;
				}
				cnt_for_k--;
			}
			trunk_tail->next = new_head;
			trunk_tail = new_tail;
			new_head = NULL;
		}
	}
	trunk_tail->next = cur;
	return trunk_head->next;






	//ListNode* trunkHead = new ListNode(0);
	//ListNode* trunkTail = trunkHead;
	//ListNode* newHead = NULL;
	//ListNode* newTail = NULL;
	//ListNode* cursor = head;
	//for(int i = 0; i == 0 && head != NULL; cursor = head, newTail = newHead = NULL){
	//	//1. Check rest of nodes have at least K
	//	for(;i < k && cursor != NULL;i++) cursor = cursor->next;
	//	if (i != k) trunkTail->next = head; //2.2 Rest of nodes amount less than K, connect it directly
	//	else{
	//		//2.1 Move nodes from original list to new reversed list with head of variable "newHead"
	//		for (cursor = head; i > 0; i--){
	//			head = cursor->next;
	//			cursor->next = newHead;
	//			newHead = cursor;
	//			cursor = head;
	//			if (i == k) newTail = newHead;
	//		}
	//		//3. Connect new reverseed list "newHead" to the whole reversed list with head of "trunkHead"
	//		trunkTail->next = newHead;
	//		trunkTail = newTail;
	//	}
	//}
	//return trunkHead->next == NULL ? head : trunkHead->next;
}