class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        vector<int>suffMin(n);
        int minval = INT_MAX;
        for(int i=n-1; i>=0; i--){
            minval = min(nums[i] , minval);
            suffMin[i] = minval;
        }
        int maxval = INT_MIN;
        for(int i=0; i<n-1; i++){
            maxval = max(nums[i] , maxval);
            if(maxval <= suffMin[i+1]) return i+1;
        }
        return 0;
    }
};