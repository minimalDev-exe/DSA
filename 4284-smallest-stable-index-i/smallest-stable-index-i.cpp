class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxval = INT_MIN;
        int minval = INT_MAX;
        vector<int>maxVal(n);
        vector<int>minVal(n);
        for(int i=0; i<nums.size(); i++){
            maxval = max(maxval , nums[i]);
            maxVal[i] = maxval;
        }
        for(int i=n-1; i>=0; i--){
            minval = min(minval , nums[i]);
            minVal[i] = minval;
        }
        for(int i=0; i<n; i++){
            if(maxVal[i]-minVal[i] <= k){
                return i;
            }
        }
        return -1;
    }
};