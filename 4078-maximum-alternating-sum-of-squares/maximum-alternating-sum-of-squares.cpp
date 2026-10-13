class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        vector<int>vec(n);
        int st = 0 , end = n-1;
        for(int i=0; i<n; i++){
            if(i%2==0){
                vec[i]=nums[end];
                ans+=vec[i]*vec[i];
                end--;
            }
            else{
                vec[i]=nums[st];
                ans-=vec[i]*vec[i];
                st++;
            }
        }
        
        return ans;
    }
};