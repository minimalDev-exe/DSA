class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = std::accumulate(nums.begin(),nums.end(),0);
        if(x>sum) return -1;
        int k = sum - x;
        if(k<0) return -1;
        int lt = 0 , len = 0 , maxLen = INT_MIN;
        int sumA = 0;
        for(int rt=0; rt<nums.size(); rt++){
            sumA+=nums[rt];
            while(sumA>k && lt<=rt){
                sumA-=nums[lt];
                lt++;
            }
            len = rt-lt+1;
            if(sumA==k){
                maxLen = max(len , maxLen);
            }
        }
        if(maxLen==INT_MIN) return -1;
        return nums.size()-maxLen;
    }
};