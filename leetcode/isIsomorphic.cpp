#include"isIsomorphic.h"

bool Solution14::isIsomorphic(string s, string t)
{
	
	int sLen = s.size();
	char charArrS[256] = { 0 };
	char charArrT[256] = { 0 };
	for (int i = 0; i < sLen; i++)
	{
		if (charArrS[s[i]] == 0 && charArrT[t[i]] == 0)
		{
			charArrS[s[i]] = t[i];
			charArrT[t[i]] = s[i];
		}
		else
		if (charArrS[s[i]] != t[i] || charArrT[t[i]] != s[i])
			return false;
	}

	return true;
}