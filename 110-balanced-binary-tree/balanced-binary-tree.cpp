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
    int check(TreeNode* root){
        if(!root) return 0;
        int leftHt = check(root->left);
        int rightHt = check(root->right);
        if(leftHt==-1 || rightHt==-1) return -1;
        if(abs(leftHt - rightHt) > 1) return -1;
        return max(leftHt , rightHt) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if(!root) return true;

        if(check(root)==-1){
            return false;
        }
        return true;
    }
};