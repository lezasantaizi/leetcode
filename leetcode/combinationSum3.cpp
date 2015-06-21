#include "combinationSum3.h"

void Solution57::func(vector<vector<int>>& result,int k ,int n,int length,int* saveEachValue)
{
	if(k == 1)
	{
		saveEachValue[length - 1] = n;
		vector<int> temp(saveEachValue+1,saveEachValue+length);
		result.push_back(temp);
		return ;
	}
	else
	{
		for(int i = saveEachValue[length - k-1]+1 ;i < n-i ;i++)
		{
			saveEachValue[length - k] = i;

			int sum = 0;
			int cnt = 9;
			for (int i = 1;i<= k-1;++i)
			{
				sum += cnt;
				cnt--;
			}
			if(sum <n-i)
				continue;
			func(result,k-1,n-i,length,saveEachValue);
		}

	}
}

vector<vector<int>> Solution57::combinationSum3(int k, int n) 
{
	vector<vector<int>> result;
	if(k>9 || k < 0 || n <= 0 )
		return result;
	int sum = 0;

	int cnt = 9;
	for (int i = 1;i<= k;++i)
	{
		sum += cnt;
		cnt--;
	}
	if(sum <n)
		return result;

	int* saveEachValue = (int*)malloc(sizeof(int)*(k+1));
	memset(saveEachValue,0,sizeof(int)*(k+1));
	
	func(result,k,n,k+1,saveEachValue);
	free(saveEachValue);
	return result;
}