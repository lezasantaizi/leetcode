#include"isIsomorphic.h"



//void quickSort(int *arr, int l, int r)
//{
//	//�˴���д����ʵ�ֿ�������
//	int i, j, x, temp;
//	if (l<r)
//	{
//		i = l;
//		j = r;
//		x = arr[(l + r) / 2];
//		//���м�Ԫ��Ϊ�� 
//		while (1)
//		{
//			while (i <= r&&arr[i]<x)
//				i++;
//			while (j >= 0 && arr[j]>x)
//				j--;
//			if (i >= j) //���������� 
//				break;
//			else
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//				//���� 
//			}
//		}
//		quickSort(arr, l, i - 1); //����벿�ֽ��п��� 
//		quickSort(arr, j + 1, r); //���Ұ벿�ֽ��п��� 
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