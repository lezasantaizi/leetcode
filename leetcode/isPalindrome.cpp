#include "isPalindrome.h"

bool Solution28::isPalindrome(string s) 
{
	int sLen = s.size();
	int j = sLen - 1;
	for (int i = 0 ;i< sLen; i++)
	{
		if(i>=j)
			break;
		if((s[i] <= 'Z'&& s[i] >= 'A') ||(s[i] <='z' && s[i]>= 'a') || (s[i] <='9' && s[i]>= '0'))
		{		
			while(!((s[j]<= 'Z'&& s[j] >= 'A')||
				(s[j] <='z' && s[j]>= 'a')||(s[j] <='9' && s[j]>= '0')))

			{
				j--;
			}
			if(i>=j)
				break;
			if((s[i]>'9' && s[j] > '9' &&(abs(s[i] - s[j]) == 32))|| (s[i] == s[j]))
			{
				j--;
				continue;
			}
			else
			{
				return false;
			}
				
		}

	}
	return true;
}