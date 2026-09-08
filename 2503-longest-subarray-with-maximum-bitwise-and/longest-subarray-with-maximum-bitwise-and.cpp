class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        auto maxit = std::max_element(nums.begin() , nums.end());
        int maxval = *maxit;
        int max_len = 1;
        int len = 1;
        for(int i=0; i<n-1; i++){
            if(nums[i]==maxval && nums[i]==nums[i+1]){
                len++;
                max_len = max(max_len , len);
            }
            else if(nums[i]!=nums[i+1]){
                len = 1;
            }  
        }
        return max_len;
    }
};