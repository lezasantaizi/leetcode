#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution19 {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n);
};
