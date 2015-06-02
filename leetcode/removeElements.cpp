#include"removeElements.h"
ListNode* Solution20::removeElements(ListNode* head, int val)
{
	if (head == NULL)
		return NULL;
	ListNode* head1 = head;
	ListNode* head2 = head->next;
	while (head2)
	{
		if (head2->val == val)
		{
			head1->next = head2->next;
		}
		else
		{
			head1 = head1->next;
		}
		head2 = head2->next;
	}
	if (head->val == val)
		return head->next;
	else
		return head;
}