class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>s;
        int n = prices.size();
        vector<int>ans(n,0);
        for(int i=prices.size()-1; i>=0; i--){
            while(s.size()>0 && s.top()>prices[i]){
                s.pop();
            }
            if(s.size()==0){
                ans[i] = prices[i];
            }
            else{
                ans[i] = prices[i] - s.top();
            }
            s.push(prices[i]);
        }
        return ans;
    }
};