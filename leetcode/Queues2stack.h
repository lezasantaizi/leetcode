#include<iostream>
#include <queue>
#include <string>
#include <math.h>

using namespace std;
class Solution46 {
public:
	// Push element x onto stack.
	queue<int> temp[2];
	static int cur ;
	void push(int x) ;

	// Removes the element on top of the stack.
	void pop() ;

	// Get the top element.
	int top() ;

	// Return whether the stack is empty.
	bool empty() ;
};