#include "combine.h"

void Solution58::func(vector<vector<int>>& result ,int* temp,int length,int n, int k)
{
	if(k == 1)
	{
		for (int i = temp[length - k-1]+1;i<=n;i++)
		{
			temp[length - k] = i;
			vector<int> data(temp+1,temp+length);
			result.push_back(data);
		}
	}
	else
	{
		for (int i = temp[length - k-1]+1; i <= n-k+1; i++)
		{
			temp[length - k] = i;
			func(result,temp,length,n,k-1);
		}
		
	}
}

vector<vector<int>> Solution58::combine(int n, int k) 
{
	vector<vector<int>> result;
	if(n< k)
	{
		return result;
	}
	int* temp = (int*) malloc(sizeof(int)*(k+1));
	memset(temp,0,sizeof(int)*(k+1));
	func(result,temp,k+1,n,k);
	free(temp);
	return result;
}