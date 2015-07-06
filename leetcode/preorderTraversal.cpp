#include "preorderTraversal.h"

void func(TreeNode* root, vector<int>& result)
{
	if (root == NULL)
	{
		return;
	}
	result.push_back(root->val);
	func(root->left,result);
	func(root->right,result);
}

vector<int> Solution71::preorderTraversal(TreeNode* root) 
{
	//方法1
	//stack<TreeNode*> saveNode;
	//vector<int> result;
	//if (root == NULL)
	//{
	//	return result;
	//}
	//while (root || saveNode.empty() != true)
	//{
	//	while (root)
	//	{
	//		saveNode.push(root);
	//		result.push_back(root->val);
	//		root = root->left;
	//	}
	//	root = saveNode.top();
	//	saveNode.pop();
	//	root = root->right;
	//}
	//return result;

	//方法2
	vector<int> result;
	if (root == NULL)
	{
		return result;
	}
	func(root,result);
	return result;
}