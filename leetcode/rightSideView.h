
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

class Solution69 {
public:
	vector<int> rightSideView(TreeNode* root) ;
};