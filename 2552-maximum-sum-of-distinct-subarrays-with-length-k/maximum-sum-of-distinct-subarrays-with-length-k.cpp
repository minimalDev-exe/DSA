class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int lt = 0;
        long long sum = 0 , maxSum = 0;
        for(int rt=0; rt<nums.size(); rt++){
            m[nums[rt]]++;
            sum+=nums[rt];
            while(m[nums[rt]]>1 || rt-lt+1>k){
                m[nums[lt]]--;
                sum-=nums[lt];
                if(m[nums[lt]]==0){
                    m.erase(nums[lt]);
                }
                lt++;
            }
            if(rt-lt+1==k){
                maxSum=max(sum,maxSum);
            }
        }
        return maxSum;
    }
};