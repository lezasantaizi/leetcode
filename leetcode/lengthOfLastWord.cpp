#include"lengthOfLastWord.h"


// "",	   0
//" ",	0
//" a",	1
//"a   "	1
//"       ",	0
int Solution18::lengthOfLastWord(string s)
{
	int sLen = s.size();
	if (sLen == 0)
		return 0;
	int lastWordLen = 0;
	while (sLen >= 1 && s[sLen - 1] == ' ')
		sLen--;
	for (int i = sLen - 1; i >=0 ; i--)
	{
		if (s[i] != ' ')
		{
				lastWordLen++;
		}
		else
			break;
		
	}
	return lastWordLen;
}