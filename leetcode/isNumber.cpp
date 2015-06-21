#include "isNumber.h"

bool Solution56::isNumber(string s) 
{
	int len = s.size();
	int nativeFlag = 0;
	int eFlag = 0;
	int pointFlag = 0;
	int numFlag = 0;
	int prevNumFlag= 0;
	int i = 0;
	while(s[i] == ' ')
		i++;
	for (;i< len;i++)
	{
		if(s[i] <= '9' && s[i] >= '0')
		{
			numFlag = 1;
			prevNumFlag = 1;
		}
		else if ((s[i] == '-' || s[i] == '+') && numFlag == 0 && ((nativeFlag == 0 && pointFlag == 0) || (eFlag == 1)))
		{		
			nativeFlag = 1;
			numFlag = 0;
		}
		else if(s[i] == '.' && pointFlag == 0 && eFlag == 0)
		{
			pointFlag = 1;
		}
		else if(s[i] == 'e' && eFlag == 0 &&(( numFlag == 1 && pointFlag == 0) ||( prevNumFlag == 1 && pointFlag == 1 )))
		{
			eFlag = 1;
			numFlag = 0;
		}
		else
		{
			break;
		}
	}
	while(i < len && s[i] ==' ')
		i++;

	if(numFlag == 0 || i < len)
		return false;
	return true;
}