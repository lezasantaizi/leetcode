#include "recoverTree.h"

TreeNode* wrong1,*wrong2,*temp;
void func(TreeNode* root)
{
	if(root == NULL)
		return;
	func(root->left);
	if (root->val < temp->val)
	{
		if(wrong1 == NULL)
			wrong1 = temp;
		wrong2 = root;
	}
	temp = root;
	func(root->right);
}

void Solution65::recoverTree(TreeNode* root) 
{
	 temp = new TreeNode(-10000);
	 wrong1 = NULL;
	 wrong2 = NULL;
	 func(root);
	 int temp_value = wrong1->val;
	 wrong1->val = wrong2->val;
	 wrong2->val = temp_value;
	 return ;
}