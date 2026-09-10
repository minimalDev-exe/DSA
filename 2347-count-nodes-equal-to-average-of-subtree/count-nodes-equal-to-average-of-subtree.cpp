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
    int ans = 0;

    int averageOfSubtree(TreeNode* root) {
        averageOfNode(root);
        return ans;
    }

    pair<int,int> averageOfNode(TreeNode* root){
        if(!root) return {0,0};
        auto left = averageOfNode(root->left);
        auto right = averageOfNode(root->right);
        
        int totalSum = root->val + left.first + right.first;
        int totalCnt = 1 + left.second + right.second;

        if(root->val == totalSum/totalCnt) ans++;

        return {totalSum , totalCnt};
    }
};