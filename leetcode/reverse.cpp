#include "reverse.h"

int Solution5::reverse(int x)
{
	int dst = 0;
	int src = x; 			
	while (src)
	{
		if ((dst>214748364) || (dst<-214748364))
			return 0;
		dst = dst * 10 + src % 10;
		src = src / 10;

	}
	return dst;
}