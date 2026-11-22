class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int cnt[101] = {} , ans = 0;
        for(int n : nums){
            cnt[n]++;
        }
        for(int i=0; i+k<101; i++){
            ans+=cnt[i]*cnt[i+k];
        }
        return ans;
    }
};