#include "levelOrder.h"

vector<vector<int>> Solution41::levelOrder(TreeNode* root) 
{
	//vector<vector<int>> result ;
	//queue<TreeNode*> temp;
	//int iter = 1;
	//if (root == NULL)
	//	return result;
	//
	//temp.push(root);

	//vector<int> tempResult;
	//tempResult.push_back(root->val);
	//result.push_back(tempResult);
	//tempResult.clear();

	//while(temp.size())
	//{
	//	
	//	TreeNode* first = temp.front();
	//	temp.pop();
	//	iter--;

	//	if (first->left !=NULL)
	//	{
	//		temp.push(first->left);
	//		tempResult.push_back(first->left->val);
	//	}
	//	if (first->right != NULL)
	//	{
	//		temp.push(first->right);
	//		tempResult.push_back(first->right->val);
	//	}

	//	if (iter == 0)
	//	{
	//		iter = temp.size();
	//		if(iter != 0)
	//			result.push_back(tempResult);
	//		tempResult.clear();
	//	}
	//}
	//
	//return result;



	vector<vector<int>> res;
	queue<TreeNode*> Que;
	if (!root)
	{
		return res;
	}
	Que.push(root);
	while (!Que.empty())
	{
		vector<int> element;
		int Size = Que.size();
		while (Size--)
		{
			TreeNode* cur = Que.front();
			Que.pop();
			element.push_back(cur->val);
			if (cur->left)
			{
				Que.push(cur->left);
			}
			if (cur->right)
			{
				Que.push(cur->right);
			}
		}
		res.push_back(element);    
	}
	return res;
}