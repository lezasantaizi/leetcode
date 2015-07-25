#include<iostream>
#include<stack>
#include<vector>
#include <deque>
using namespace std;

 struct RandomListNode {
     int label;
     RandomListNode *next, *random;
     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 };

 struct ListNode {
	 int val;
	 ListNode *next;
	 ListNode(int x) : val(x), next(NULL) {}
 };


class Solution96 {
public:
	RandomListNode *copyRandomList(RandomListNode *head) ;
};