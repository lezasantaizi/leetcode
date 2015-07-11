#include "zigzagLevelOrder.h"

vector<vector<int>> Solution77::zigzagLevelOrder(TreeNode* root) 
{
	queue<TreeNode*> saveNode;
	vector<vector<int>> result;
	int sum = 1;
	if (root != NULL)
	{
		saveNode.push(root);
	}
	else
	{
		return result;
	}
	vector<int> rowNode;
	while (saveNode.empty() != true)
	{
		TreeNode* temp = saveNode.front();
		rowNode.push_back(temp->val);
		saveNode.pop();
		if (temp->left)
		{
			saveNode.push(temp->left);
		}
		if (temp->right)
		{
			saveNode.push(temp->right);
		}
		--sum;
		if (sum == 0)
		{
			result.push_back(rowNode);
			rowNode.clear();
			sum = saveNode.size();
		}
	}
	for (int i = 1 ;i< result.size();i = i+2)
	{
		reverse(result[i].begin(),result[i].end());
	}
	return result;
}