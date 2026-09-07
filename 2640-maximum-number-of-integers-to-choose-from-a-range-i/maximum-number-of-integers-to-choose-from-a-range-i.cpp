class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
       unordered_set<int>s;
       for(int i=0; i<banned.size(); i++){
            s.insert(banned[i]);
       }
       int ans = 0;
       int currSum = 0; 
       for(int i=1; i<=n; i++){
        if(s.find(i)==s.end()){
            currSum += i;
            if(currSum>maxSum) break;
            ans++;
        }
       }
       return ans;
    }
};