
#include "connect.h"
void Solution73::connect(TreeLinkNode *root) 
{
	queue<TreeLinkNode*> saveNode;
	TreeLinkNode* curNode = NULL;
	int sum = 1;
	if (root == NULL)
	{
		return;
	}
	saveNode.push(root);
	while (saveNode.empty() != true)
	{

		TreeLinkNode* preNode = saveNode.front();
		if (curNode != NULL)
		{
			curNode->next = preNode;
		}
		curNode = preNode;
		saveNode.pop();
		if (preNode->left)
		{
			saveNode.push(preNode->left);
		}
		if (preNode->right)
		{
			saveNode.push(preNode->right);
		}
		--sum;
		if (sum == 0)
		{
			curNode->next = NULL;
			curNode = NULL;
			sum = saveNode.size();
		}
	}
}