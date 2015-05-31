#include"isSymmetric.h"

bool symmetric(TreeNode* left,TreeNode* right)
{
	if (left == NULL && right== NULL)
	{
		return true;
	}
	if (left == NULL || right == NULL)
	{
		return false;
	}

	return (left->val == right->val) &&symmetric(left->left,right->right) && symmetric(left->right,right->left);
}

bool Solution15::isSymmetric(TreeNode* root)
{
	if (root ==NULL)
	{
		return true;
	}
	return symmetric(root->left,root->right);
}