#include "flatten.h"

void Solution75::flatten(TreeNode* root) 
{
	vector<TreeNode*> saveResult;
	stack<TreeNode*> saveNode;
	if (root == NULL)
	{
		return ;
	}
	
	while (root || saveNode.empty() != true)
	{
		while (root)
		{
			saveNode.push(root);
			saveResult.push_back(root);
			root = root->left;
		}

		TreeNode* temp = saveNode.top();
		saveNode.pop();
		root = temp->right;
	}
	int i = 0;
	for (i = 0;i< saveResult.size()-1;i++)
	{
		saveResult[i]->left = NULL;
		saveResult[i]->right = saveResult[i+1];
	}
	saveResult[i]->left = NULL;
	saveResult[i]->right = NULL;
}