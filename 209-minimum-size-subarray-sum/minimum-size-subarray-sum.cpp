class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = 0;
        int lt = 0 , sum = 0;
        for(int rt=0; rt<nums.size(); rt++){
            sum+=nums[rt];
            if(sum>=target){
                while(sum>=target){
                    if(ans==0) ans = rt-lt+1;
                    else ans = min(ans,rt-lt+1);
                    sum-=nums[lt];
                    lt++;
                } 
            }
        }
        return ans;
    }
};