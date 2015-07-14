#include "buildTree2.h"

TreeNode* Solution82::func(vector<int>& inorder, vector<int>& postorder,int start ,int end, int& prePos)
{
	if(start > end || prePos < 0)
	{
		prePos++;
		return NULL;
	}
	int inPos = saveNode[postorder[prePos]];
	TreeNode* root = new TreeNode(inorder[inPos]);
	
	//--prePos;
	root->right = func(inorder, postorder, inPos + 1, end, --prePos);
	root->left = func(inorder, postorder, start, inPos - 1, --prePos);
	
	
	return root;
}

TreeNode* Solution82::buildTree(vector<int>& inorder, vector<int>& postorder)
{
	int inorderSize = inorder.size();
	for (int i = 0 ;i< inorderSize;i++)
	{
		saveNode[inorder[i]] = i;
	}
	int prePos = inorderSize - 1;
	TreeNode* result = func(inorder,postorder,0,inorderSize-1, prePos);
	return result;
}