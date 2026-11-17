class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>> , vector<pair<int,vector<int>>>, greater<>>pq;
        for(auto x : points){
            int dist = x[0]*x[0]+x[1]*x[1];
            pq.push({dist,x});
        }

        vector<vector<int>>ans(k);
        int i=0;
        while(i<k){
            ans[i] = pq.top().second;
            pq.pop();
            i++;
        }
        return ans;
    }
};