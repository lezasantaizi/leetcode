#include "buildTree.h"

TreeNode* Solution80::func(vector<int>& preorder,vector<int>& inorder,int start, int end, int& prePos)
{
	if(start>end || prePos >= inorder.size())
	{
		prePos--;
		return NULL;
	}

	int inPos = saveOrder[preorder[prePos]];

	TreeNode* result = new TreeNode(inorder[inPos]);
	result->left = func(preorder,inorder,start,inPos - 1,++prePos);
	result->right = func(preorder,inorder,inPos+1,end,++prePos);
	return result;
}

TreeNode* Solution80::buildTree(vector<int>& preorder, vector<int>& inorder) 
{
	for (int i = 0 ;i< inorder.size();i++)
	{
		saveOrder[inorder[i]] = i;
	}
	int prePos = 0;
	TreeNode* result = func(preorder,inorder,0,inorder.size()-1,prePos);
	return result;
}