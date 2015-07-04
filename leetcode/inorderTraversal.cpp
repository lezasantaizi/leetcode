#include "inorderTraversal.h"

vector<int> Solution67::inorderTraversal(TreeNode* root)
{
	stack<TreeNode*> temp;
	vector<int> result;
	while(root !=NULL || temp.empty() != true)
	{
		if (root !=NULL)
		{
			temp.push(root);
			root = root->left;
		}
		else
		{
			TreeNode* pre = temp.top();
			temp.pop();
			result.push_back(pre->val);
			root = pre->right;
		}
	}
	return result;
}