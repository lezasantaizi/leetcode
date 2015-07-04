#include "sortedArrayToBST.h"

TreeNode* func(vector<int>& nums,int numsLen,int start)
{
	//int numsLen = ;
	if (numsLen == 0)
	{
		return NULL;
	}
	if (numsLen == 1)
	{
		return new TreeNode(nums[start]);
	}
	int median = numsLen/2;
	TreeNode* temp = new TreeNode(nums[start+median]);
	temp->left = func(nums,median,start);
	temp->right = func(nums,numsLen - median - 1,start+median+1);
	return temp;
}
TreeNode* Solution66::sortedArrayToBST(vector<int>& nums)
{
	TreeNode* temp = func(nums,nums.size(),0);
	return temp;
}