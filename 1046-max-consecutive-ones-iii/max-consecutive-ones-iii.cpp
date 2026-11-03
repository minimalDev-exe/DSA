class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cnt_0 = 0 , ans = 0 , lt = 0;
        for(int rt=0; rt<nums.size(); rt++){
            if(nums[rt]==0) cnt_0++;

            while(cnt_0>k){
                if(nums[lt]==0) cnt_0--;
                lt++;
            }
            ans = max(ans,rt-lt+1);
        }
        return ans;
    }
};