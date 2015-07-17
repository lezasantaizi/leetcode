#include<vector>
#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution86 {
public:
	int maxPathSum(TreeNode* root) ;
};




