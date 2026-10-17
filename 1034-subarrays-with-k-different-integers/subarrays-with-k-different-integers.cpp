class Solution {
public:
    int subarraysWithAtMostKDistinct(vector<int>&nums, int k){
        int ans = 0 , lt = 0;
        unordered_map<int,int>m;
        for(int rt=0; rt<nums.size(); rt++){
            m[nums[rt]]++;
            while(m.size()>k){
                m[nums[lt]]--;
                if(m[nums[lt]]==0){
                    m.erase(nums[lt]);
                }
                lt++;
            }
            ans+=rt-lt+1;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return subarraysWithAtMostKDistinct(nums,k)-subarraysWithAtMostKDistinct(nums,k-1);
    }
};