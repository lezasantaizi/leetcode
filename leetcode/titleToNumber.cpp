#include"titleToNumber.h"

int Solution11::titleToNumber(string s)
{
	int sum = 0;
	int n = s.size();
	int cnt = n;
	while (cnt--)
	{
		sum = sum * 26+s[n - cnt - 1] - 'A'+1;
	}
	return sum;
}