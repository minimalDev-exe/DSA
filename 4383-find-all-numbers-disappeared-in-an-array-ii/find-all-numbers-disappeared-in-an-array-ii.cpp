class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int next = lower;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<lower) continue;
            if(nums[i]>upper) break;

            if(next<nums[i]){
                ans.push_back({next , nums[i]-1});
            }

            next = nums[i]+1;
        }

        if(next<=upper){
            ans.push_back({next , upper});
        }
        return ans;
    }
};