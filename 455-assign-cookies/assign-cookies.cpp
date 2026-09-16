class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s){
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        int ans = 0;
        int child = g.size()-1;
        for(int i=s.size()-1; i>=0; i--){
            if(g[child]<=s[i]){
                ans++ , child--;
                if(child<0) break;
            } 
            else{
                child--; i++;
                if(child<0) break;
            }
        }
        return ans;
    }
};