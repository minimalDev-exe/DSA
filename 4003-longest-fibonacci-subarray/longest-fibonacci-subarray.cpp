class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int len = 2;
        int max_len = 0;
        for(int i=2; i<nums.size(); i++){
            if(nums[i]==nums[i-1]+nums[i-2]){
                len++;
            }
            else{
                len = 2;
            }
            max_len = max(max_len,len);
        }
        return max_len;
    }
};