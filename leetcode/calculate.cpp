#include "calculate.h"

int func(string s,int& subLength)
{
	int sLen = s.size();
	int result = 0;
	int sum = 0;
	int sign = 0;
	int value = 0;
	for (int i = 0;i<sLen;++i)
	{
		if (s[i] == ' ')
		{
			continue;
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			if (sign == 1)
			{
				sum+=value;
			}
			else if(sign == -1)
			{
				sum-=value;
			}
			else
			{
				sum = value;
			}
			sign = 44 - s[i];
			value = 0;
		}
		else if (s[i] <='9' && s[i]>='0')
		{
			value = value*10+(s[i]-'0');
		}
		else if (s[i] == '(')
		{
			int subLen = 0;
			value= func(s.substr(i+1,sLen),subLen);
			i+= subLen;

		}
		else if(s[i] == ')')
		{
			if (sign == 1)
			{
				sum+=value;
			}
			else if(sign == -1)
			{
				sum-=value;
			}
			else
			{
				sum = value;
			}
			subLength = i+1;
			return sum;
		}
	}
	if (sign == 1)
	{
		sum+=value;
	}
	else if(sign == -1)
	{
		sum-=value;
	}
	else
	{
		sum = value;
	}
	return sum;
}


int Solution59::calculate(string s) 
{
	//方法1：
	//int subLen = 0;
	//int result = func(s,subLen);
	//return result;

	//方法2：
	int sLen = s.size();
	int value = 0;
	int result = 0;
	int prevSign = 1;
	int backgroundSign = 1;
	int lastFlag = 0;
	vector<int> saveSign ;
	for (int i = 0;i< sLen;i++)
	{
		if (s[i] == ' ')
		{
			continue;
		}
		else if(s[i] == '+')
		{
			result += backgroundSign*prevSign * value;
			prevSign = 1;
			value = 0;
		}
		else if(s[i] == '-')
		{
			result += backgroundSign*prevSign*value;
			prevSign = -1;
			value = 0;
		}
		else if(s[i] == '(')
		{
			saveSign.push_back(backgroundSign);
			backgroundSign *= prevSign;
			prevSign = 1;
		}
		else if(s[i] == ')')
		{
			result += backgroundSign*prevSign * value;
			backgroundSign = saveSign.back();
			saveSign.pop_back();
			value = 0;
			lastFlag = 1;
		}
		else if (s[i] <='9' && s[i]>='0')
		{
			value = value*10+(s[i]-'0');
			lastFlag = 2;
		}
	}
	if(lastFlag == 2)
		result += backgroundSign*prevSign * value;
	return result;
}