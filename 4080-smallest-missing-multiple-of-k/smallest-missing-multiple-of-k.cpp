class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%k==0){
                s.insert(nums[i]);
            }
        }
        int mul = 1;
        while(true){
            if(s.find(mul*k)==s.end()){
                return mul*k;
                break;
            }
            mul++;
        }
    }
};