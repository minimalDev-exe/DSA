class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int n = weight.size();
        if(n==1) return 0;
        int mx = INT_MIN;
        int cnt = 0 , len = 0;
        for(int rt=0; rt<n; rt++){
            mx = max(mx,weight[rt]);
            len++;
            if(len>1 && weight[rt]<mx){
                cnt++;
                len = 0;
                mx = INT_MIN;
            }
        }
        return cnt;
    }
};