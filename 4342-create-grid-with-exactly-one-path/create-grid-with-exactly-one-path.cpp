class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans;
        string start = "";
        for(int i=0; i<n; i++){
            start+='.';
        }
        ans.push_back(start);
        for(int i=1; i<m; i++){
            string x = "";
            for(int i=1; i<n; i++){
                x+='#';
            }
            x+='.';
            ans.push_back(x);
        }
        return ans;
    }
};