#include "maxPathSum.h"

void func(TreeNode* root, int& pathMax , int& resultMax)
{
	if (root == NULL)
	{
		pathMax = 0;
		resultMax = 0;
		return;
	}
	int temp_path_max_left = 0;
	int temp_result_max_left = 0;
	int temp_path_max_right = 0;
	int temp_result_max_right = 0;
	func(root->left,temp_path_max_left,temp_result_max_left);
	func(root->right,temp_path_max_right,temp_result_max_right);
	int root_result_max = temp_path_max_left+temp_path_max_right+root->val;
	if(root->left == NULL && root->right ==NULL)
		resultMax = root_result_max;
	else if(root->left == NULL)
		resultMax = max(temp_result_max_right,root_result_max);
	else if(root->right == NULL)
		resultMax = max(temp_result_max_left,root_result_max);
	else
		resultMax = max(max(temp_result_max_left,temp_result_max_right),root_result_max);
	pathMax = max(max(temp_path_max_left+root->val,temp_path_max_right+ root->val),0);
}

int Solution86::maxPathSum(TreeNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL)
	{
	}
	int pathMax= 0;
	int resultMax = 0;
	func(root,pathMax,resultMax);
	return resultMax;
}