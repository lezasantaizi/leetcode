#include "pathSum.h"

void func(vector<vector<int>>& result,TreeNode* root, int sum,vector<int>& tempData)
{
	if (root == NULL)
	{
		return;
	}
	if(root->val == sum && root->left == NULL && root->right == NULL)
	{
		tempData.push_back(root->val);
		result.push_back(tempData);
		tempData.pop_back();
		return ;
	}

	tempData.push_back(root->val);
	func(result,root->left,sum - root->val,tempData);
	func(result,root->right,sum - root->val,tempData);
	tempData.pop_back();

}
vector<vector<int>> Solution72::pathSum(TreeNode* root, int sum) 
{
	//方法1：
	//vector<vector<int>> result ;
	//vector<int> tempData;
	//func(result,root,sum,tempData);
	//return result;

	//方法2：答案不对！
	vector<vector<int>> result ;
	vector<int> tempData;
	stack<TreeNode*> saveTree;
	while (root || saveTree.empty() != true)
	{
		while (root)
		{
			sum -= root->val;
			tempData.push_back(root->val);
			saveTree.push(root);
			root = root->left;
		}

		root = saveTree.top();
		root = root->right;
		if (root == NULL)
		{
			result.push_back(tempData);

		}
		saveTree.pop();
	}
	return result;
}