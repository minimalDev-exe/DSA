class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            unordered_set<int>s;
            int cnt = 0;
            for(int j=i; j<nums.size(); j++){
                s.insert(nums[j]);
                int sz = s.size();
                ans+=sz*sz;
            }
        }
        return ans;
    }
};