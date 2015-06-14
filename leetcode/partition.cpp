#include "partition.h"

	ListNode* Solution47::partition(ListNode* head, int x) {
		if(head == NULL)
			return NULL;

		ListNode* firstHead = new ListNode(0);
		ListNode* secondHead = new ListNode(0);
		ListNode* first = firstHead;
		ListNode* second = secondHead;
		ListNode* myHead = head;
		while (myHead)
		{
			if (myHead->val >= x)
			{
				second->next = myHead;
				myHead = myHead->next;
				second = second->next;
				second->next = NULL;
			}
			else
			{
				first->next = myHead;
				myHead = myHead->next;
				first = first->next;
				first->next = NULL;
			}			
		}
		first->next = secondHead->next;
		ListNode* temp = firstHead->next;
		delete(firstHead);
		delete(secondHead);
		return temp;

	}
