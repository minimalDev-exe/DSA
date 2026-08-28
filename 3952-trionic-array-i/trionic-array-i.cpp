class Solution {
public:
    bool isDecreasing(vector<int>&nums , int peak , int valley){
        int n = nums.size();
        if(peak==0 || valley==n-1) return false;
        for(int i=peak; i<valley; i++){
            if(nums[i]<=nums[i+1]){
                return false;
            }
        }
        return true;
    }

    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int peak = n-1 , valley = 0;
        for(int i=0; i<n-1; i++){
            if(peak==n-1 && nums[i]>=nums[i+1]){
                peak = i;
            }
            if(valley==0 && nums[n-1-i]<=nums[n-2-i]){
                valley = n-1-i;
            }
            if(peak<valley){
                return isDecreasing(nums , peak , valley);
            }
        }
        return false;
    }
};