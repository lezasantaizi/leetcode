#include"merge.h"

void Solution35::merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	//�ô������㷨��copy��discuss
	int pos = m-- + n--;
	while (n >= 0)  
		nums1[--pos] = ((m >= 0) && nums1[m]>nums2[n]) ? nums1[m--] : nums2[n--];

}