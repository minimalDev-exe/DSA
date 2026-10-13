class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int res = 0;
        int prod = 1;
        int len;
        int lt = 0;
        for(int i=0; i<nums.size(); i++){
            prod*=nums[i];
            while(prod>=k){
                prod/=nums[lt];
                lt++;
            }
            res+=i-lt+1;
        }
        return res;
    }
};