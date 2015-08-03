#include "maxProfit.h"

int Solution110::maxProfit(vector<int>& prices) 
{
	int arr_len = prices.size();
	int max_result = 0;
	int sum = 0;
	for (int i = 0;i<arr_len-1;i++)
	{
		sum += prices[i+1] - prices[i];
		sum = max(0,sum);
		max_result = max(sum, max_result);
	}
	return max_result;
}