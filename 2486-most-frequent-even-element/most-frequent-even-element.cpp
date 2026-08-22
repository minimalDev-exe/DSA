class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans = -1;
        unordered_map<int,int>m;
        m[ans]=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                m[nums[i]]++;
                if(m[ans]<m[nums[i]]) ans = nums[i];
                else if(m[ans]==m[nums[i]] && ans > nums[i]) ans = nums[i];
            }
        }
        return ans;
    }
};