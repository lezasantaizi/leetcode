#include "Queues2stack.h"

 int Solution46::cur = 0;
// Push element x onto stack.
void Solution46::push(int x) {
	temp[cur].push(x);
}

// Removes the element on top of the stack.
void Solution46::pop() {
	int length = temp[cur].size();
	for (int i = 0 ;i< length-1; i++)
	{
		temp[1-cur].push(temp[cur].front());
		temp[cur].pop();
	}
	temp[cur].pop();
	cur = 1 - cur;
}

// Get the top element.
int Solution46::top() {
	int length = temp[cur].size();
	for (int i = 0 ;i< length-1; i++)
	{
		temp[1-cur].push(temp[cur].front());
		temp[cur].pop();
	}
	int top = temp[cur].front();
	temp[1-cur].push(top);
	temp[cur].pop();
	cur = 1 - cur;
	return top;

}

// Return whether the stack is empty.
bool Solution46::empty() {
	return temp[cur].empty();
}