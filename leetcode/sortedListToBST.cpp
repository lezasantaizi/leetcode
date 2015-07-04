#include "sortedListToBST.h"

TreeNode* Solution63::sortedListToBST(ListNode* head) 
{
	if (head == NULL)
	{
		return NULL;
	}
	if (head->next == NULL)
	{
		return new TreeNode(head->val);
	}
	ListNode* fast = head;
	ListNode* slow = head;
	ListNode* pre = slow;

	while (fast != NULL && fast->next != NULL)
	{
		pre = slow;
		slow = slow->next;
		fast = fast->next->next;
	}
	TreeNode* newHead = new TreeNode(slow->val);
	newHead->right = sortedListToBST(slow->next);
	pre->next = NULL;
	newHead->left = sortedListToBST(head);
	return newHead;
	//TreeNode* treeHead = new TreeNode()
}