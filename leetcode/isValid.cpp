#include "isValid.h"

bool Solution30::isValid(string s) 
{
	int sLen = s.size();
	vector<char> left ;

	for (int i  = 0;i<sLen; i++)
	{
		if (s[i] == '{' || s[i] == '['||s[i] == '(')
		{
			left.push_back(s[i]);
		}
		else if(s[i] == '}'||s[i] == ']'||s[i] == ')')
		{
			if (left.empty())
			{
				return false;
			}
			else if((left.back() == '(' && s[i] == ')') || (left.back() == '[' && s[i] == ']')||(left.back() == '{' && s[i] == '}'))
			{
				left.pop_back();
			}
			else
			{
				return false;
			}
		}

	}
	if (!left.empty())
	{
		return false;
	}
	return true;
}