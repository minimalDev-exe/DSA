class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin() , banned.end());
       int it = 0 , len = banned.size();
       int sum = 0 , ans = 0;
       for(int i=1; i<=n; i++){
            if(it<len && banned[it]==i){
                while(it<len && banned[it]==i){
                    it++;
                }
            }
            else{
                sum+=i;
                if(sum<=maxSum){
                    ans++;
                }
                else{
                    return ans;
                }
            }
       }
       return ans;
    }
};