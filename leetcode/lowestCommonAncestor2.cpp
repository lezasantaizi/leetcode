#include "lowestCommonAncestor2.h"

TreeNode* Solution84::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
	if(root == NULL || p == NULL || q == NULL)
		return NULL;
	if(root->val<=p->val && root->val>=q->val || root->val>=p->val && root->val<=q->val)    
		return root;
	if(root->val<=p->val && root->val<=q->val)  
		return lowestCommonAncestor(root->right, p, q);
	return lowestCommonAncestor(root->left, p, q);      
}