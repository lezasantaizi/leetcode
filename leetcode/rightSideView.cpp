#include "rightSideView.h"

vector<int> Solution69::rightSideView(TreeNode* root) 
{
	queue<TreeNode*> temp;
	vector<int> result;
	if (root == NULL)
	{
		return result;
	}
	temp.push(root);
	//result.push_back(root->val);
	int numPerLevel = 1;
	while (temp.empty()!= true)
	{
		TreeNode* preTree = temp.front();
		temp.pop();
		--numPerLevel;

		if (preTree->left)
		{
			temp.push(preTree->left);
		}
		if (preTree->right)
		{
			temp.push(preTree->right);
		}
		if (numPerLevel == 0)
		{
			result.push_back(preTree->val);
			numPerLevel = temp.size();
		}
	}
	return result;
}