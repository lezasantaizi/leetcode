#include "computeArea.h"

#define MAX(A,B) ((A) > (B)? (A) :(B))
#define MIN(A,B) ((A) < (B)? (A) :(B))
int Solution37::computeArea(int A, int B, int C, int D, int E, int F, int G, int H) 
{
	int rectA = abs(E - G) * abs(F - H);
	int rectB = abs(A - C) * abs(B - D);
	int left = MAX(A,E);
	int bottom = MAX(B,F);
	int right = MIN(C,G);
	int top = MIN(D,H);
	return rectA + rectB - MAX(right - left ,0)* MAX(top - bottom,0);
}