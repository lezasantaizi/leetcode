#include<vector>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution74 {
public:
	bool isValidBST(TreeNode* root) ;
};