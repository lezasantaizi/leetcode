#include<iostream>
#include <queue>
#include <string>
#include <math.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution42 {
public:
	TreeNode* invertTree(TreeNode* root) ;
};