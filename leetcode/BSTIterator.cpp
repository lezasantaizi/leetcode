#include "BSTIterator.h"

BSTIterator79::BSTIterator79(TreeNode *root)
{
	while(root)
	{
		saveNode.push(root);
		root = root->left;
	}
}
bool BSTIterator79::hasNext() 
{
	if(saveNode.size() != 0)
		return true;
	else
	{
		return false;
	}
}
int BSTIterator79::next() 
{
	TreeNode* temp = saveNode.top();
	saveNode.pop();
	int result = temp->val;
	temp = temp->right;
	while (temp)
	{
		saveNode.push(temp);
		temp = temp->left;
	}
	return result;
	
}