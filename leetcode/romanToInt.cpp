#include "romanToInt.h"

int toNumber(char ch) {  
	switch (ch) {  
	case 'I': return 1;  
	case 'V': return 5;  
	case 'X': return 10;  
	case 'L': return 50;  
	case 'C': return 100;  
	case 'D': return 500;  
	case 'M': return 1000;  
	}  
	return 0;  
} 

int Solution34::romanToInt(string s) 
{
	int sLen = s.size();
	if (sLen<= 0)
	{
		return 0;
	}
	int sum = toNumber(s[0]);
	for (int i = 1 ;i< sLen; i++)
	{
		if(toNumber(s[i-1]) < toNumber(s[i]))
		{
			sum+= toNumber(s[i]) - 2*toNumber(s[i-1]);
		}
		else
		{
			sum+= toNumber(s[i]);
		}
	}
	return sum;
}