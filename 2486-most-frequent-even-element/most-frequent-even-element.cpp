class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans = -1;
        unordered_map<int,int>m;
        m.reserve(nums.size());
        int max_freq = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                m[nums[i]]++;
                if(max_freq<m[nums[i]]) ans = nums[i] , max_freq = m[nums[i]];
                else if(max_freq==m[nums[i]] && ans > nums[i]) ans = nums[i] , max_freq = m[nums[i]];
            }
        }
        return ans;
    }
};