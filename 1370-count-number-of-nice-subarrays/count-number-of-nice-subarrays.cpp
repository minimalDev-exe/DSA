class Solution {
public:
    int noOfSubarrays(vector<int>& nums , int k){
        int ans = 0 , lt = 0 , oddCnt = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==1){
                oddCnt++;
            }
            while(oddCnt>k){
                if(nums[lt]%2==1){
                    oddCnt--;
                }
                lt++;
            }
            if(oddCnt<=k){
                ans+=i-lt+1;
            }
        }
        return ans;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return noOfSubarrays(nums,k) - noOfSubarrays(nums,k-1);
    }
};