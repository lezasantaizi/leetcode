#include<vector>
#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution70 {
public:
	vector<vector<int>> levelOrderBottom(TreeNode* root);
};