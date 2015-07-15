#include "connect2.h"

void Solution85::connect(TreeLinkNode *root) 
{
	TreeLinkNode* head = NULL,*tail = NULL;
	while(root)
	{
		if(root->left)
		{
			if(head == NULL)
			{
				head = root->left;
				tail = root->left;
			}
			else
			{
				tail->next = root->left;
				tail = tail->next;
			}
		}
		if (root->right)
		{
			if(head == NULL)
			{
				head = root->right;
				tail = root->right;
			}
			else
			{
				tail->next = root->right;
				tail = tail->next;
			}
		}
		if (root->next == NULL)
		{
			root = head;
			head = NULL;
			tail = NULL;
		}
		else
		{
			root = root->next;
		}
	}
}