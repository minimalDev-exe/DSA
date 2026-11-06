class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        if(indexDifference>=nums.size()){
            return {-1,-1};
        }
        int end = indexDifference;
        int maxi = INT_MIN , mini = INT_MAX;
        int maxIdx = -1 , minIdx = -1;
        
        while(end<nums.size()){
            int i = end-indexDifference;
            if(nums[i]>maxi){
                maxi = nums[i];
                maxIdx = i;
            }
            if(nums[i]<mini){
                mini = nums[i];
                minIdx = i;
            }

            if(abs(nums[end]-maxi)>=valueDifference){
                return {maxIdx,end};
            }
            else if(abs(nums[end]-mini)>=valueDifference){
                return {minIdx,end};
            }

            end++;
        }
        return {-1,-1};
    }
};