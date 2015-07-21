#include "MinStack.h"

void Solution90::push(int x) {
	stack1.push(x);
	if (x <= getMin())
	{
		stack2.push(x);
	}
}

void Solution90::pop() {
	if (stack1.empty())
	{
		return;
	}
	if (stack1.top() == stack2.top())
	{
		stack2.pop();
	}
	stack1.pop();
}

int Solution90::top() {
	if (stack1.empty())
	{
		return -1;
	}
	return stack1.top();
}

int Solution90::getMin() {
	if (stack2.size() == 0)
	{
		return INT_MAX;
	}
	else
	{
		return stack2.top();
	}
}