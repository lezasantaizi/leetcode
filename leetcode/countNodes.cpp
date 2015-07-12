#include "countNodes.h"

int TreeDepth(TreeNode* root)
{
	int depth = -1;
	while(root)
	{
		depth++;
		root = root->left;
	}
	return depth;
}

int Solution78::countNodes(TreeNode* root) 
{
	//方法1：耗时比较多
	//if (root == NULL)
	//{
	//	return 0;
	//}
	//int leaves = 0;
	//int depth = 0;
	//int result = 0;
	//while(true)
	//{
	//	if(root->left == NULL)
	//	{
	//		leaves += 1;
	//		break;
	//	}
	//	int heightLeft = TreeDepth(root->left);
	//	int heightRight = TreeDepth(root->right);
	//	depth = max(depth,heightLeft+1);
	//	if (heightLeft == heightRight)
	//	{
	//		leaves += 1<< heightRight;
	//		root = root->right;
	//	}
	//	else if (heightLeft > heightRight)
	//	{
	//		root = root->left;
	//	}
	//}
	//result = (1<< depth) -1 + leaves;
	//return result;


	//方法2：
	if(root == NULL)
		return 0;

	int height = 0;
	TreeNode* head = root;
	while (head)
	{
		height++;
		head = head->left;
	}
	int result = 1;
	head = root;
	while (--height)
	{
		result = result <<1;
		TreeNode* temp = head->right;
		int heightRight = 0;
		while (temp)
		{
			heightRight++;
			temp = temp->left;
		}
		if (heightRight < height)
		{
			head = head->left;
		}
		else
		{
			result = result | 1;
			head = head->right;
		}

	}
	return result;

}