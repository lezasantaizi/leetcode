#include"generateTrees.h"

vector<TreeNode*> func(int start, int end,vector<vector<vector<TreeNode*>>>& saveTempTree)
{
	vector<TreeNode*>temp;
	if(start>end)
	{
		temp.push_back(NULL);
		return temp;
	}
	if(saveTempTree[start][end].empty() !=true)
		return saveTempTree[start][end];
	for(int i = start;i<= end;i++)
	{
		vector<TreeNode*> leftTree = func(start,i-1,saveTempTree);
		vector<TreeNode*> rightTree = func(i+1,end,saveTempTree);

		for (int k = 0;k< leftTree.size();k++)
			for(int j = 0;j< rightTree.size();j++)
			{
				TreeNode* head = new TreeNode(i);
				head->left = leftTree[k];
				head->right = rightTree[j];
				temp.push_back(head);
			}
	}
	saveTempTree[start][end] =temp;
	return temp;
}
vector<TreeNode*> Solution87::generateTrees(int n)
{
	vector<vector<vector<TreeNode*>>> save_temp_tree(n+1,vector<vector<TreeNode*>>(n+1));

	//vector<vector<int>> temp(n);
	//vector<int> temp2(2,1);
	//temp[1] = temp2;
	vector<TreeNode*> result = func(1,n,save_temp_tree);
	return result;
}