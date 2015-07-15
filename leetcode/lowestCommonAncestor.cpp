#include "lowestCommonAncestor.h"

int Solution83::func(TreeNode* root, TreeNode* p,TreeNode* q)
{
	if(root == NULL)
		return 0;
	int left = func(root->left,p,q);
	int right = func(root->right,p,q);
	int cur = 0;
	if(root == p || root == q)
	{
		cur = 1;
	}
	if (cur + left + right == 2 && result == NULL)
	{
		result = root;
	}
	return cur + left + right ;
}
TreeNode* Solution83::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
{
	result = NULL;
	func(root,p,q);
	return result;
}