class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            unordered_map<int,int>m;
            for(int j=i; j<nums.size(); j++){
                m[nums[j]]++;
                sum+=nums[j];
                if(m.find(sum)!=m.end()) ans++;
            }
        }
        return ans;
    }
};