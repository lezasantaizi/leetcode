#include<vector>
#include <iostream>
#include <string>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution66 {
public:
	TreeNode* sortedArrayToBST(vector<int>& nums);
};