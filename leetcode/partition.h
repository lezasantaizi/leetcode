#include<iostream>
#include<vector>
#include<string>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution47 {
public:
	ListNode* partition(ListNode* head, int x);
};