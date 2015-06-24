#include "largestNumber.h"

string Solution60::largestNumber(vector<int>& nums) 
{
	int numLen = nums.size();
	string result;
	for (int i = 0 ;i< numLen;++i)
	{
		for (int j = i+1; j < numLen; j++)
		{
			string num2Char1 = to_string(nums[i]);
			string num2Char2 = to_string(nums[j]);
			int iter1 = 0;
			int iter2 = 0;
			while(1)
			{
				if(num2Char1[iter1] > num2Char2[iter2])
				{
					break;
				}
				else if(num2Char1[iter1] < num2Char2[iter2])
				{
					int temp = nums[i];
					nums[i] = nums[j];
					nums[j] = temp;
					break;
				}
				++iter1;
				++iter2;

				// 898£¬89 ; 898 898 < 89 89 89 ,so 89 898 > 898 89
				if(num2Char1[iter1] == '\0'&& num2Char2[iter2] != '\0')
					iter1 = 0;
				else if (num2Char1[iter1] != '\0' && num2Char2[iter2] == '\0')
					iter2 = 0;
				else if(num2Char1[iter1] == '\0'&& num2Char2[iter2] == '\0')
					break;
			}
		}
		if(result == "" && nums[i] == 0)
		{
			result = "0";
			break;
		}
		string num2Char1 = to_string(nums[i]);
		result += num2Char1;
	}
	return result;
}