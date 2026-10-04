class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(char c : s){
            m[c]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto x : m){
            pq.push({x.second,x.first});
        }
        string ans;
        while(pq.size()>0){
            for(int i=0; i<pq.top().first; i++){
                ans.push_back(pq.top().second);
            }
            pq.pop();
        }
        return ans;
    }
};