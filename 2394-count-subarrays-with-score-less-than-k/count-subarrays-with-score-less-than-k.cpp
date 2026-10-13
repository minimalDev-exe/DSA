class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long ans = 0;
        long long lt = 0;
        long long len , sum = 0 , score;
        for(int rt=0; rt<nums.size(); rt++){
            sum+=nums[rt];
            len = rt-lt+1;
            score=sum*len;
            while(score>=k && lt<=rt){
                sum-=nums[lt];
                lt++;
                len = rt-lt+1;
                score = sum*len;
            }
            ans+=rt-lt+1;
        }
        return ans;
    }
};