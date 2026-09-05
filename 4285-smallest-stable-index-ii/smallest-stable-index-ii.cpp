class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>suffMin(n);
        int minval = INT_MAX , maxval = INT_MIN;
        for(int i=n-1; i>=0; i--){
            minval = min(nums[i],minval);
            suffMin[i] = minval;
        }
        int idx = -1;
        for(int i=0; i<n; i++){
            maxval = max(maxval , nums[i]);
            if(maxval - suffMin[i] <= k){
                idx = i;
                break;
            }
        }
        return idx;
    }
};