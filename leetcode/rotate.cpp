#include"rotate.h"

//void Solution7::rotate(vector<int>& nums, int k)
//{
//
//}

void Solution7::rotate(int* nums, int numsSize, int k) 
{
	k = k%numsSize;
	if (k == 0)
		return;
	int* temp = (int*)malloc(sizeof(int)*k);
	memcpy(temp,nums+(numsSize-k),sizeof(int)*k);
	memcpy(nums + k, nums , sizeof(int)*(numsSize - k));
	memcpy(nums, temp, sizeof(int)*k);
	free(temp);

}