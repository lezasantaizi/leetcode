#include "hasPathSum.h"

bool Solution40::hasPathSum(TreeNode* root, int sum) 
{
	if (root == NULL)
		return false;
	if (root->val == sum && root->left == NULL && root->right == NULL)
		return true;
	bool left = hasPathSum(root->left,sum - root->val);
	bool right = hasPathSum(root->right, sum - root->val);
	if(left == true || right == true)
		return true;
	else
		return false;
}