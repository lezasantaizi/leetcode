#include "maxDepth.h"

int Solution39::maxDepth(TreeNode* root) 
{
	if(root == NULL)
		return 0;
	if(root->left == NULL && root->right == NULL)
		return 1;
	if (root->left == NULL && root->right != NULL)
	{
		return maxDepth(root->right)+1;
	}
	if (root->left!=NULL && root->right == NULL)
	{
		return maxDepth(root->left)+1;
	}
	int leftDepth = maxDepth(root->left);
	int rightDepth = maxDepth(root->right);
	return  (leftDepth > rightDepth ? leftDepth : rightDepth)+1;
}