class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int>cost(s.size());
        for(int i=0; i<s.size(); i++){
            cost[i] = abs(s[i]-t[i]);
        }
        int lt = 0 , ans = 0 , totalcost = 0;
        for(int rt = 0; rt<s.size(); rt++){
            totalcost+=cost[rt];
            if(totalcost>maxCost){
                totalcost-=cost[lt];
                lt++;
            }
            ans=max(ans , rt-lt+1);
        }
        return ans;
    }
};