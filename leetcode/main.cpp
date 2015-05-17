#include<iostream>
#include "countPrimes.h"
#include "isHappy.h"
#include "hammingWeight.h"
#include "rob.h"
using namespace std;






int main()
{
	Solution4 solution;
	int data[7] = {10,21,18,27,19,3,22};
	int temp = solution.rob(data,7);
	cout << temp ;
	return 0;
}


