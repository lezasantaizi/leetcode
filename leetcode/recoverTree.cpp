#include "recoverTree.h"

void Solution65::recoverTree(TreeNode* root) 
{
	stack<TreeNode*> temp;
	TreeNode* firstMistake = NULL;
	TreeNode* secondMistake = NULL;

	while(root!= NULL || temp.empty() != true)
	{
		if (root != NULL)
		{
			temp.push(root);
			root = root->left;
		}
		else
		{
			root = temp.top();
			temp.pop();
			if((root->left != NULL && root->val < root->left->val) || (root->right != NULL && root->val > root->right->val))
			{
				if(firstMistake == NULL)
					firstMistake = root;
				else 
				{
					secondMistake = root;
					break;
				}
			}
			printf("%d,",root->val);
			root = root->right;
		}
	}

	int value = firstMistake->val;
	firstMistake->val = secondMistake->val;
	secondMistake->val = value;
}