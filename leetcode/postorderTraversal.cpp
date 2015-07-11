#include"postorderTraversal.h"

vector<int> Solution76::postorderTraversal(TreeNode* root)
{
	stack<TreeNode*> saveNode;
	vector<int> result;
	vector<int> flag;
	while (root || saveNode.empty() != true)
	{
		while (root)
		{
			saveNode.push(root);
			flag.push_back(0);
			root = root->left;
		}

		
		while (saveNode.empty() != true && flag.back() == 1 )
		{
			TreeNode* temp = saveNode.top();
			result.push_back(temp->val);
			saveNode.pop();
			flag.pop_back();
		}
		if (saveNode.empty() != true)
		{
			TreeNode* temp = saveNode.top();
			root = temp->right;
			flag[flag.size() - 1] = 1;
		}
		else
			break;

	}
	return result;
}