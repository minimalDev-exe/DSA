class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt = 0;
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                st.push(s[i]);
            }

            if(st.empty()){
                cnt++;
                continue;
            }

            if(s[i]==')'){
                st.pop();
            }
        }
        cnt+=st.size();
        return cnt;
    }
};