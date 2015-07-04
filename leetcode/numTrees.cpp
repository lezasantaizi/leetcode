#include "numTrees.h"

int func(int* saveTemp,int n)
{
	if (n == 0)
	{
		saveTemp[n] = 1;
		return 1;
	}
	if (saveTemp[n] != 0)
	{
		return saveTemp[n];
	}
	int sum = 0;
	for (int i = 0;i< n;i++)
	{
		sum += func(saveTemp,i) * func(saveTemp,n - i-1);
	}
	saveTemp[n] = sum;
	return sum;
}
int Solution68::numTrees(int n) 
{
	int* saveTemp = (int*)malloc(sizeof(int)*(n+1));
	memset(saveTemp,0,sizeof(int)*(n+1));
	int result =  func(saveTemp,n);
	free(saveTemp);
	return result;
}