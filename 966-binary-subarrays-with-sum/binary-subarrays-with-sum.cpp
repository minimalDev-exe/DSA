class Solution {
public:
    int atMost(vector<int>& nums, int goal) {
        if(goal<0) return 0;
        int res = 0;
        int lt = 0;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            while(sum>goal){
                sum-=nums[lt];
                lt++;
            }
            res+=i-lt+1;
        }
        return res;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal){
        return atMost(nums,goal)-atMost(nums,goal-1);
    }
};