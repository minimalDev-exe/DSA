class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int minval = INT_MAX;
        int maxval = INT_MIN;
        vector<int>minVal(n);
        for(int i=n-1; i>=0; i--){
            minval = min(minval , nums[i]);
            minVal[i] = minval;
        }
        for(int i=0; i<n; i++){
            maxval = max(maxval , nums[i]);
            if(maxval - minVal[i] <= k ) return i;
        }
        return -1;
    }
};