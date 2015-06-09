#include"isSameTree.h"


bool Solution36::isSameTree(TreeNode* p, TreeNode* q)
{
	//if (p == NULL && q == NULL)
	//	return true;
	//else if (p == NULL || q == NULL)
	//	return false;
	if (p == NULL || q == NULL)
		return (p == q);
	bool result = (p->val == q->val);
	return result && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
	//bool leftSame = isSameTree(p->left, q->left);
	//bool rightSame = isSameTree(p->right, q->right);
	//if (leftSame == true && rightSame == true && p->val == q->val)
	//{
	//	return true;
	//}
	//else
	//	return false;

}