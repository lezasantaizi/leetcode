#include "levelOrderBottom.h"

vector<vector<int>> Solution70::levelOrderBottom(TreeNode* root)
{
	queue<TreeNode*> saveTree;
	vector<vector<int>> result;
	if (root == NULL)
	{
		return result;
	}
	int numEachLevel = 1;
	saveTree.push(root);
	vector<int> temp;
	while (saveTree.empty() != true)
	{
		--numEachLevel;
		TreeNode* preNode = saveTree.front();
		saveTree.pop();
		temp.push_back(preNode->val);
		if (preNode->left)
		{
			saveTree.push(preNode->left);
		}
		if (preNode->right)
		{
			saveTree.push(preNode->right);
		}
		
		if (numEachLevel == 0)
		{
			numEachLevel = saveTree.size();
			result.push_back(temp);
			temp.clear();
		}
	}
	reverse(result.begin(),result.end());
	return result;
}