#include "minDepth.h"

int Solution38::minDepth(TreeNode* root) 
{
	if(root == NULL)
		return 0;
	if(root->right == NULL && root->left == NULL)
		return 1;
	if(root->left != NULL && root->right == NULL)
		return minDepth(root->left)+1;
	if(root->left == NULL && root->right != NULL)
		return minDepth(root->right)+1;

	return min(minDepth(root->left),minDepth(root->right))+1;
	//queue<TreeNode*> mQueue;
	//mQueue.push(root);
	//int iter= 0;
	//while(mQueue.size() != 0 && mQueue.size()== ++iter)
	//{
	//	TreeNode* temp = mQueue.front();
	//	mQueue.pop();
	//	if(temp->left !=NULL)
	//		mQueue.push(temp->left);
	//	if (temp->right!=NULL)
	//		mQueue.push(temp->right);
	//}
	//if(mQueue.size() != 0)
	//	iter = iter -1;
	//return log(iter)/log(2)+1;  
}
