#include"addBinary.h"

string Solution24::addBinary(string a, string b)
{
	int aLen = a.size();
	int bLen = b.size();
	int carry = 0;

	int bigLen = aLen < bLen ? bLen : aLen;
	string result = "";
	for (int i = 0; i < bigLen; i++)
	{
		int aStr = aLen > 0 ? a[aLen-1] - '0' : 0;
		int bStr = bLen > 0 ? b[bLen-1] - '0' : 0;
		int bitData = aStr + bStr + carry;
		if (bitData >= 2)
		{
			carry = 1;
			result = char('0'+bitData - 2) + result;
		}
		else
		{
			carry = 0;
			result = char('0' + bitData) + result;
		}
		aLen--;
		bLen--;
	}
	if (carry)
	{
		result = char('1') + result;
	}
	return result;
}