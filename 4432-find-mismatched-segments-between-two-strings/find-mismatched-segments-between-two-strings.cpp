class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>ans;
        int n = s1.size();
        string temp1 = "" , temp2 = "";
        for(int i=0; i<n; i++){
            if(s1[i]!=s2[i]){
                temp1+=s1[i];
                temp2+=s2[i];
            }
            else if(s1[i]==s2[i]){
                if(temp1!="" && temp2!=""){
                    ans.push_back({temp1,temp2});
                }
                temp1="" , temp2="";
            }
        }
        if(temp1!="" && temp2!=""){
            ans.push_back({temp1,temp2});
        }
        return ans;
    }
};