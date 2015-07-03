#include "kthSmallest.h"

void func(TreeNode* root ,int& count,int& value,int k)
{
	if (root == NULL)
	{
		return ;
	}
	func(root->left,count,value,k);
	if(count >= k && value == 0)
	{
		value = root->val; 
		return;
	}
	else
	{
		count = count +1;
	}
	func(root->right,count,value,k);
}

int Solution64::kthSmallest(TreeNode* root, int k) 
{
	//方法1：
	//int count = 0;
	//int value = 0;
	//func(root,count,value,k-1);
	//return value;

	//方法2：
	stack<TreeNode*> temp;
	int count = 0;

	while(root != NULL || temp.empty() != true)
	{
		if(root!= NULL)
		{
			temp.push(root);
			root = root->left;
		}
		else
		{
			root = temp.top();
			temp.pop();
			if(count >= k-1)
				return root->val;
			else
			{
				++count;
			}
			//printf("%d,",root->val);
			root = root->right;
			
		}
	}

}