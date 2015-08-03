#include<iostream>
#include<stack>
#include<vector>
#include <deque>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution110 {
public:
	int maxProfit(vector<int>& prices) ;
};
