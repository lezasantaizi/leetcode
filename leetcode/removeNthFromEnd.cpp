#include"removeNthFromEnd.h"

ListNode* Solution19::removeNthFromEnd(ListNode* head, int n) 
{
	if(head == NULL)
		return NULL;
	vector<ListNode*> temp;
	int listLen  = 0;
	ListNode* ptr = head;
	while(ptr)
	{

		listLen++;
		temp.push_back(ptr);
		ptr = ptr->next;
	}
	if (listLen == 1 && n <= listLen)
	{
		return NULL;
	}
	if (n == 1 )
	{
		temp[listLen- 2]->next = NULL;
	}
	else if(listLen == n)
	{
		return temp[1];
	}
	else
	{
		temp[listLen - n-1]->next = temp[listLen - n+1];
	}
	return head;
}
