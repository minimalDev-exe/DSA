class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            string x = to_string(nums[i]);
            int sum = 0;
            for(int j=0; j<x.size(); j++){
                sum+=x[j]-'0';
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
    }
};