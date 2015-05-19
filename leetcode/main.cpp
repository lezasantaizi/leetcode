#include<iostream>

#include "countPrimes.h"
#include "isHappy.h"
#include "hammingWeight.h"
#include "rob.h"
#include"reverse.h"
#include"reverseBits.h"
#include"rotate.h"
using namespace std;



void rotate(int* nums, int numsSize, int k) {
	k = k%numsSize;
	if (k == 0)
		return;
	int* temp = (int*)malloc(sizeof(int)*k);
	memmove(temp, nums + numsSize - k, sizeof(int)*k);
	memmove(nums + k, nums, sizeof(int)*(numsSize - k));
	memmove(nums, temp, sizeof(int)*k);
	free(temp);
}


int main()
{
	Solution7 solution;
	int data[3] = {1,2,3};
	//vector<int> temp = { 10, 21, 18, 27, 19, 3, 22 };
	//solution.rotate(temp,3);
	//solution.rotate(data,3, 1);
	rotate(data, 3, 1);
	//cout << temp ;
	return 0;
}


