class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string ans;
        int cnt1 = 0 , cnt2 = 0;
        int i=0;
        while(i<n){
            if(s[i]=='('){
                cnt1++;
                i++;
                while(cnt1!=cnt2){
                    if(s[i]=='(') cnt1++;
                    else cnt2++;
                    if(cnt1!=cnt2){
                        ans.push_back(s[i]);
                    }
                    i++;  
                }
            }
        }
        return ans;
    }
};