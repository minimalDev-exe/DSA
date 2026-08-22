class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans = -1;
        m[-1] = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                m[nums[i]]++;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                if(m[ans]<m[nums[i]]){
                    ans = nums[i];
                }
                else if(m[ans]==m[nums[i]] && ans>nums[i]){
                    ans = nums[i];
                }
            }
        }
        return ans;
    }
};