#include "isValidBST.h"

bool Solution74::isValidBST(TreeNode* root) 
{
	vector<int> result ;
	stack<TreeNode*> saveNode;

	while (root != NULL || saveNode.empty() != true)
	{
		while (root)
		{
			saveNode.push(root);
			root = root->left;
		}
		TreeNode* temp = saveNode.top();
		result.push_back(temp->val);
		saveNode.pop();
		root = temp->right;
	}
	int resultSize = result.size();
	for (int i = 0;i< resultSize-1;i++)
	{
		if (result[i] >= result[i+1])
		{
			return false;
		}
	}
	return true;
}