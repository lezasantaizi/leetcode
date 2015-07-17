#include"generateTrees.h"

void func(TreeNode* root, int leftNum, int rightNum, vector<TreeNode*> result)
{

}
vector<TreeNode*> Solution87::generateTrees(int n)
{
	vector<TreeNode*> result;
	for (int i = 1; i <= n; i++)
	{
		TreeNode* root = new TreeNode(i);
		func(root,i-1,n-i,result);
	}
}