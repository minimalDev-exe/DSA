class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX;
        for(int i=l; i<=r; i++){
            int sum = 0;
            for(int j=0; j<i; j++) sum+=nums[j];
            int low = 0 , high = i;
            if(sum>0) ans = min(ans,sum);
            while(high<nums.size()){
                sum+=nums[high++];
                sum-=nums[low++];
                if(sum>0) ans = min(ans,sum);
            }
            
        }
        return ans==INT_MAX? -1:ans;
    }
};