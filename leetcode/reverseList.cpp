#include"reverseList.h"

ListNode* Solution22::reverseList(ListNode* head)
{
	if (head == NULL)
		return NULL;
	ListNode* head1 = head;
	ListNode* head2 = head->next;
	while (head2)
	{
		ListNode* temp = head2->next;
		head2->next = head1;
		head1 = head2;
		head2 = temp;
	}
	head->next = NULL;
	return head1;
}