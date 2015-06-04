#include"myAtoi.h"

int Solution23::myAtoi(string str) 
{
	int strLen = str.size();
	int num = 0;
	int flag = 0;
	int index = 0;

	while (index < strLen && str[index] == ' ')
	{
		index++;
	}
	if (index >= strLen)
		return 0;
	if (str[index] == '-')
	{
		flag = 1;
		index += 1;
	}
	else if (str[index] == '+')
	{
		index += 1;
	}

	for (int i = index; i < strLen; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (num > 214748364 || (num == 214748364 && flag == 0 && (str[i] - '0') >7) || (num == 214748364 && flag == 1 && (str[i] - '0') >8))
			{
				if (flag == 1)
					return -2147483648;
				else
					return 2147483647;
			}
			num = num * 10 + str[i] - '0';
		}
		else
			return 0;
	}
	if (flag == 1)
	{
		num *= -1;
	}
	return num;
}