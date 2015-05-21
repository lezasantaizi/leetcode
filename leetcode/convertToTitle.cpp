#include"convertToTitle.h"

string Solution10::convertToTitle(int n)
{
	string result = "";
	while (n)
	{
		result = char((n - 1) % 26 + 'A')+result;
		n = (n-1) / 26;
	}
	//int num = result.size();
	//for (size_t i = 0; i < num/2; i++)
	//{
	//	char temp = result[i];
	//	result[i] = result[num - 1 - i];
	//	result[num - 1 - i] = temp;
	//}
	return result;
}