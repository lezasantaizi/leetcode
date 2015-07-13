#include "sumNumbers.h"

int Solution81::sumNumbers(TreeNode* root)
{
	stack<TreeNode*> saveNode;
	vector<int> saveFlag ;
	int result = 0;
	int pathValue = 0;
	if (root == NULL)
	{
		return 0;
	}
	while (root  || saveNode.empty() != true)
	{
		while (root)
		{
			saveNode.push(root);
			saveFlag.push_back(0);
			pathValue = 10*pathValue + root->val;
			root = root->left;
		}

		while (saveFlag.empty() !=true && saveFlag.back() == 1)
		{
			TreeNode* temp = saveNode.top();
			saveNode.pop();
			saveFlag.pop_back();
			if(temp->left == NULL && temp->right == NULL)
				result += pathValue;
			pathValue = pathValue/10;
		}
		
		if(saveNode.empty() != true)
		{
			TreeNode* temp = saveNode.top();
			root = temp->right;
			saveFlag[saveFlag.size() - 1] = 1;
		}
	}
	return result;
}