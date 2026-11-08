class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        for(int bitIdx=0; bitIdx<32; bitIdx++){
            int cnt1 = 0 , cnt0 = 0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]&(1<<bitIdx)){
                    cnt1++;
                }
                else cnt0++;
            }
            ans+=cnt1*cnt0;
        }
        return ans;
    }
};