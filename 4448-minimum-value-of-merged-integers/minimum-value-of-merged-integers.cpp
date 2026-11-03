class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i=0; i<nums.size(); i+=2){
            int x = stoi(to_string(nums[i])+to_string(nums[i+1]));
            mini = min(mini , x);
        }
        return mini;
    }
};