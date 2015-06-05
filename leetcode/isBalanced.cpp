#include"isBalanced.h"

#define MAX(a,b) ((a)>(b)?(a):(b))
bool func(TreeNode* root, int& height)
{
	if (root == NULL)
	{
		height = 0;
		return true;
	}
	int leftHeight = 0;
	int rightHeight = 0;
	bool left = func(root->left, leftHeight);
	bool right = func(root->right, rightHeight);
	if (left && right && abs(leftHeight - rightHeight) < 2)
	{
		height = MAX(rightHeight, leftHeight) + 1;
		return true;
	}
	else
	{
		height = MAX(rightHeight, leftHeight) + 1;
		return false;
	}
		
}

bool Solution27::isBalanced(TreeNode* root)
{
	int height = 0;
	return func(root, height);
}