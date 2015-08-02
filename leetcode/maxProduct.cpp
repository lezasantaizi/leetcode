#include "maxProduct.h"

int Solution109::maxProduct(vector<int>& nums)
{
	//方法1：两次循环：
	//int num_len = nums.size();
	//int max_product = 1;
	//int res = INT_MIN;
	//for (int i = 0;i<num_len;i++)
	//{
	//	max_product *= nums[i];
	//	if (max_product > res)
	//	{
	//		res = max_product;
	//	}
	//	if (max_product == 0)
	//		max_product = 1;
	//}
	//max_product = 1;
	//for (int i = num_len - 1;i >= 0;i--)
	//{
	//	max_product *= nums[i];
	//	if (max_product > res)
	//	{
	//		res = max_product;
	//	}
	//	if (max_product == 0)
	//		max_product = 1;
	//}
	//return res;

	//方法2： 一次循环：
	int max_product = nums[0];
	int num_len = nums.size();
	if (num_len == 1)
		return max_product;
	int res = 1;
	int first_negative = 1;
	for (int i = 0;i < num_len ;i++)
	{
		if(nums[i] != 0)
		{
			res *= nums[i];
			if (res < 0)
			{
				if (first_negative >0)
				{
					first_negative = res;
				}
				else
				{
					max_product = max(max_product,res/first_negative);
				}
			}
			else
			{
				max_product = max(max_product,res);
			}

		}
		else
		{
			max_product = max(max_product,0);
			first_negative = 1;
			res = 1;
		}
	}
	return max_product;
}