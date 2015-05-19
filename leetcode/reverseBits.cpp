#include "reverseBits.h"

uint32_t Solution6::reverseBits(uint32_t n)
{
	uint32_t result = 0;
	uint32_t src = n;
	int cnt = 32;
	while (cnt--)
	{
		result = result*2 + src % 2;
		src /= 2;
	}
	return result;
}