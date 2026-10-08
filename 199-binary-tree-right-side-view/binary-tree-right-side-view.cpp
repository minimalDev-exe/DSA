/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        recursion(0,root,ans);
        return ans;
    }

    void recursion(int level , TreeNode* node , vector<int>&ans){
        if(node==NULL) return;
        if(ans.size()==level) ans.push_back(node->val);
        if(node->right) recursion(level+1 , node->right , ans);
        if(node->left) recursion(level+1 , node->left , ans);
    }
};
