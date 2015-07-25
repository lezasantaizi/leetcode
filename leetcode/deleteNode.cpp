#include "deleteNode.h"

void Solution95::deleteNode(ListNode* node) 
{
	node->val = node->next->val;
	node->next = node->next->next;
}