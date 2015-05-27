#include"plusOne.h"



vector<int> Solution17::plusOne(vector<int>& digits)
{
	vector<int> temp(digits);
	int n = digits.size();
	while (n)
	{
		if (digits[n - 1] < 9)
		{
			temp[n - 1] = digits[n - 1] + 1;
			break;
		}
		else
		{
			temp[n - 1] = 0;
		}
		n--;
	}
	if (n == 0 && temp[0] == 0)
	{
		vector<int> temp2;
		temp2.push_back(1);
		n = digits.size();
		for (int i = 0; i < n; i++)
			temp2.push_back(0);
		return temp2;
	}
		

	return temp;

}