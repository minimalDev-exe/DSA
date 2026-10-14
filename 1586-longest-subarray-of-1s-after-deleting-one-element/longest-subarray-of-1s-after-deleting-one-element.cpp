class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int lt = 0 , cnt_1 = 0 , cnt_0 = 0;
        int ans = INT_MIN;
        for(int rt = 0; rt<nums.size(); rt++){
            if(nums[rt]==1) cnt_1++;
            else cnt_0++;

            while(cnt_0>1){
                if(nums[lt]==0) cnt_0--;
                else cnt_1--;

                lt++;
            }

            if(cnt_0<=1){
                if(cnt_0==1){
                    ans=max(ans,rt-lt);
                }
                else{
                    ans=max(ans,rt-lt+1);
                }
                
            }
        }
        if(ans==nums.size()){
            ans--;
        }
        return ans;
    }
};