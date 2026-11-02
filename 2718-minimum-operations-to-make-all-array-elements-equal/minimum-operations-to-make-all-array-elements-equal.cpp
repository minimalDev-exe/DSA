class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        long long  n = nums.size();
        vector<long long>prefSum(n);
        prefSum[0] = nums[0];
        for(long long  i=1; i<n; i++){
            prefSum[i]+= nums[i]+prefSum[i-1];
        }
        vector<long long>ans;
        for(long long  i=0; i<queries.size(); i++){
            long long  st = 0 , end = n;
            long long idx;
            while(st<end){
            long long mid = st + (end-st)/2;
                if(nums[mid]>queries[i]){
                    end = mid;
                }
                else{
                    st = mid+1;
                }
            }
            idx = st;
            long long leftSum = (long long)idx * queries[i];
            if(idx>0){
                leftSum-=prefSum[idx-1];
            }

            long long rightSum = prefSum[n-1];
            if(idx>0){
                rightSum-=prefSum[idx-1];
            }
            rightSum-= (long long)(n-idx)*queries[i];

            ans.push_back(leftSum + rightSum);
        }
        return ans;
    }
};