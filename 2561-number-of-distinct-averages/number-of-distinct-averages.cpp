class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<float>s;
        sort(nums.begin(),nums.end());
        int st = 0 , end = nums.size()-1;
        while(st<end){
            float avg = (nums[st]+nums[end])/2.0;
            s.insert(avg);
            st++;
            end--;
        }
        return s.size();
    }
};