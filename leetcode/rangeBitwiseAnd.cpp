#include "rangeBitwiseAnd.h"

int Solution48::rangeBitwiseAnd(int m, int n)
{
	if (m < n)
	{
		return (rangeBitwiseAnd(m >> 1, n >> 1) << 1);
	}
	else
	{
		// m = n
		return m;
	}
}