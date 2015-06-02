#include"reverseList.h"

ListNode* Solution22::reverseList(ListNode* head)
{
	ListNode* head1 = NULL;
	ListNode* head2 = head;
	while (head2)
	{
		ListNode* temp = head2->next;
		head2->next = head1;
		head1 = head2;
		head2 = temp;
	}
	return head1;
}