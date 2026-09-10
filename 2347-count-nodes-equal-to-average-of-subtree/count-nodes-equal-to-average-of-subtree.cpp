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
    int averageOfSubtree(TreeNode* root) {
        if(!root) return 0;
        int ans = 0;
        if(root->val == sum(root)/count(root)){
            ans++;
        }
        
        int rightAns = averageOfSubtree(root->left);
        int leftAns = averageOfSubtree(root->right);

        return ans+rightAns+leftAns;
    }

    int sum(TreeNode* root){
        if(!root) return 0;
        int rightSum = sum(root->right);
        int leftSum = sum(root->left);
        return root->val + rightSum + leftSum;
    }

    int count(TreeNode* root){
        if(!root) return 0;
        int rightCnt = count(root->right);
        int leftCnt = count(root->left);
        return rightCnt + leftCnt + 1;
    }
};