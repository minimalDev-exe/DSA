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
    bool getString(TreeNode* root,int value,string &temp){
        if(root==NULL) return false;

        if(root->val == value) return true;

        temp.push_back('L');
        if(getString(root->left,value,temp)) return true;
        temp.pop_back();

        temp.push_back('R');
        if(getString(root->right,value,temp)) return true;
        temp.pop_back();

        return false;
    }

    string getDirections(TreeNode* root, int startValue, int destValue) {
        string ans = "";
        if(root==NULL) return ans;
        string start;
        getString(root,startValue,start);
        string dest;
        getString(root,destValue,dest);
        int i =0;
        
        while(i < start.size() && i < dest.size() && start[i] == dest[i]) {
    i++;
}

for(int j = i; j < start.size(); j++) {
    ans.push_back('U');
}

for(int j = i; j < dest.size(); j++) {
    ans.push_back(dest[j]);
}
        return ans;
    }
};