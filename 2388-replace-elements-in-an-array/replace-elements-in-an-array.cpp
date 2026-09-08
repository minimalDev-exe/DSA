class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]] = i;
        }
        for(int i=0; i<operations.size(); i++){
            int idx = m[operations[i][0]];
            nums[idx] = operations[i][1];
            m[operations[i][1]] = idx;
        }
        return nums;
    }
};