class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int>s;
        int lt = 0;
        long long sum = 0;
        for(int rt=0; rt<nums.size(); rt++){
            sum+=nums[rt];
            while(rt-lt+1>2){
                sum-=nums[lt];
                lt++;
            }
            if(s.find(sum)!=s.end()){
                return true;
            }
            if(rt-lt+1==2){
                s.insert(sum);
            }
            
        }
        return false;
    }
};