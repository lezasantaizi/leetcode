#include "sortedListToBST.h"

TreeNode* sortedListToBST(ListNode* head) 
{
	ListNode* newHead = head;
	int listLen = 0;
	while (newHead)
	{
		listLen++;
		newHead = newHead->next;
	}
	return NULL;
	//TreeNode* treeHead = new TreeNode()
}