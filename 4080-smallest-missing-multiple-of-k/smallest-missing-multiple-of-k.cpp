class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        int mul = 1;
        int ans = 0;
        while(1){
            if(s.find(mul*k)==s.end()){
                ans = mul*k;
                break;
            }
            mul++;
        }
        return ans;
    }
};