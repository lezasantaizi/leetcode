#include<iostream>
#include<stack>
#include<vector>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution90 {
public:
	stack<int> stack1,stack2;
	void push(int x);

	void pop() ;

	int top() ;

	int getMin();
};