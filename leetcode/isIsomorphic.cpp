#include"isIsomorphic.h"



//void quickSort(int *arr, int l, int r)
//{
//	//此处编写代码实现快速排序
//	int i, j, x, temp;
//	if (l<r)
//	{
//		i = l;
//		j = r;
//		x = arr[(l + r) / 2];
//		//以中间元素为轴 
//		while (1)
//		{
//			while (i <= r&&arr[i]<x)
//				i++;
//			while (j >= 0 && arr[j]>x)
//				j--;
//			if (i >= j) //相遇则跳出 
//				break;
//			else
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//				//交换 
//			}
//		}
//		quickSort(arr, l, i - 1); //对左半部分进行快排 
//		quickSort(arr, j + 1, r); //对右半部分进行快排 
//	}
//}



bool Solution14::isIsomorphic(string s, string t)
{
	
	int sLen = s.size();
	char charArrS[256] = { 0 };
	char charArrT[256] = { 0 };
	for (int i = 0; i < sLen; i++)
	{
		if (charArrS[s[i]] == 0 && charArrT[t[i]] == 0)
		{
			charArrS[s[i]] = t[i];
			charArrT[t[i]] = s[i];
		}
		else
		if (charArrS[s[i]] != t[i] || charArrT[t[i]] != s[i])
			return false;
	}

	return true;
}