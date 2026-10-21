class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        unordered_map<int,int>m;
        for(int i=0; i<nums.size(); i++){
            m[i-nums[i]]++;
        }
        long long cnt = 0;
        for(auto x : m){
            if(x.second>1){
                int k = x.second;
                cnt+=1LL*k*(k-1)/2.0;
            }
        }
        ans = ( (1LL*n*(n-1))/2.0 ) - cnt; 
        return ans;
    }
};