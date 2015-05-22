#include"majorityElement.h"

int Solution12::majorityElement(vector<int>& nums)
{
	int value = 0; 
	int count = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		//if (value == nums[i])
		//{
		//	result++;
		//}
		//else
		//{
		//	if (result > 0)
		//		result--;
		//	else
		//	{
		//		result++;
		//		value = nums[i];
		//	}	
		//}
		if (count == 0)
		{
			value = nums[i];
			count = 1;
		}
		else if (value == nums[i])
		{
			count++;
		}
		else
			count--;
	}
	return value;
}