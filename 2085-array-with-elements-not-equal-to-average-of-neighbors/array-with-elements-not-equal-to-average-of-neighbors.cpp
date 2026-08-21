class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>result(nums.size());
        int i=0 , j=0;
        for(;i<nums.size()&&j<nums.size(); i++ , j+=2){
            result[j] = nums[i];
        }
        j=1;
        for(;i<nums.size() && j<nums.size(); i++ , j+=2){
            result[j] = nums[i];
        }
        return result;
    }
};