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

	//方法2：
	vector<vector<int>> result ;
	vector<int> tempData;
	vector<int> flag ;
	stack<TreeNode*> saveTree;
	while (root || saveTree.empty() != true)
	{
		while (root)
		{
			sum -= root->val;
			tempData.push_back(root->val);
			flag.push_back(0);
			saveTree.push(root);
			root = root->left;
		}

		while (flag.size() != 0 && flag.back() == 1 )
		{
			TreeNode* temp = saveTree.top();
			if(sum == 0 && temp->left == NULL && temp->right == NULL)
				result.push_back(tempData);
			sum += temp->val;
			tempData.pop_back();
			saveTree.pop();
			flag.pop_back();
		}
		if(saveTree.size() != 0)
		{
			root = saveTree.top();
			root = root->right;
			flag[flag.size() -1 ] = 1;
		}
	}
	return result;
}