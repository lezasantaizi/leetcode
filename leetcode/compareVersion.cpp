#include"compareVersion.h"

int tempFunc(string version1, int& dotLocation1, int count1, int& newLocation1)
{
	if (newLocation1 == count1)
		return 0;
	newLocation1 = version1.find('.', dotLocation1);
	if (newLocation1 == string::npos)
		newLocation1 = count1 ;

	string temp1 = version1.substr(dotLocation1, newLocation1);
	dotLocation1 = newLocation1 + 1;
	int data1 = atoi(temp1.c_str());
	return data1;
}

int Solution13::compareVersion(string version1, string version2)
{
	int count1 = version1.size();
	int count2 = version2.size();
	int dotLocation1 = 0;
	int dotLocation2 = 0;
	int data1 = 0;
	int data2 = 0;
	int newLocation1 = 0;
	int newLocation2 = 0;


	while (newLocation1 <count1 || newLocation2 <count2)
	{

		data1 = tempFunc(version1, dotLocation1, count1, newLocation1);
		data2 = tempFunc(version2, dotLocation2, count2, newLocation2);

		

		if (data1 > data2)
		{
			return 1;
		}
		else if (data1 < data2)
		{
			return -1;
		}
		

	}

	//if (newLocation1 < count1)
	//	return 1;
	//if (newLocation2 < count2)
	//	return -1;
	return 0;


	
}