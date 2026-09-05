class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int globalMax = INT_MIN , ansMax = INT_MIN;
        int ansIdx = 0;

        for(int i=0; i<n; i++){
            globalMax = max(globalMax , nums[i]);

            if(i==ansIdx) ansMax = globalMax;

            if(nums[i] < ansMax - k){
                ansIdx = i+1;
                ansMax = globalMax;
            }
        }
        return ansIdx < n ? ansIdx : -1;
    }
};