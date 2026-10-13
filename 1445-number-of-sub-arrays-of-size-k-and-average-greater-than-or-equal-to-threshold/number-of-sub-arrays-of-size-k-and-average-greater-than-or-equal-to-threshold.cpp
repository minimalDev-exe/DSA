class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans = 0;
        int lt = 0;
        int len, sum = 0;
        for(int rt=0; rt<arr.size(); rt++){
            sum+=arr[rt];
            len=rt-lt+1;
            if(len>k){
                sum-=arr[lt];
                lt++;
            }
            len=rt-lt+1;
            if(len==k){
                int avg = sum/k;
                if(avg>=threshold){
                    ans++;
                }
            }
        }
        return ans;
    }
};