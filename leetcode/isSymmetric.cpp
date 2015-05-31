#include"isSymmetric.h"

TreeNode* symmetric(TreeNode* root)
{
	if(root == NULL)
		return NULL;
	TreeNode* left = symmetric(root->left);
	TreeNode* right = symmetric(root->right);
	root->left = right;
	root->right = left;
	return root;
}

bool Solution15::isSymmetric(TreeNode* root)
{
	if (root ==NULL)
	{
		return true;
	}
	TreeNode* newLeft = symmetric(root->left);
	queue<TreeNode*> tempLeft;
	queue<TreeNode*> tempRight;
	if(root->left!=NULL)
		tempLeft.push(root->left);
	if(root->right!=NULL)
		tempRight.push(root->right);
	while(tempLeft.size()!=0 && tempRight.size()!= 0)
	{
		TreeNode* leftFront = tempLeft.front();
		TreeNode* RightFront = tempRight.front();
		tempLeft.pop();
		tempRight.pop();
		if((leftFront->left ==NULL && RightFront->left!=NULL) || (leftFront->left !=NULL && RightFront->left==NULL)||(leftFront->val != RightFront->val))
			return false;
		if(leftFront->left !=NULL)
		{
			tempLeft.push(leftFront->left);
			tempRight.push(RightFront->left);
		}

		if((leftFront->right ==NULL && RightFront->right!=NULL) || (leftFront->right !=NULL && RightFront->right==NULL))
			return false;
		if (leftFront->right != NULL)
		{
			tempLeft.push(leftFront->right);
			tempRight.push(RightFront->right);
		}

	}
	if (tempLeft.size() != tempRight.size())
	{
		return false;
	}
	return true;
}