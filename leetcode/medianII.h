#include<iostream>
#include<stack>
#include<vector>
#include <queue>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution115 {
public:
	vector<int> medianII(vector<int> &nums);
};