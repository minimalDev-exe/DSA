class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>m;
        for(int i=0; i<knowledge.size(); i++){
            m[knowledge[i][0]] = knowledge[i][1];
        }
        string temp = "";
        string ans = "";
        bool toInsert = false;
        for(int i=0; i<s.size();){
            if(s[i]=='('){
                toInsert = true;
                while( i<s.size() && s[i]!=')'){
                    if(s[i]!='(' && s[i]!=')'){
                        temp+=s[i];
                    }
                    i++;
                }
            }
            if(toInsert){
                if(m[temp]==""){
                    ans+="?";
                }
                else{
                    ans+=m[temp];
                }
                toInsert = false;
                temp = "";
            }
            else{
                ans+=s[i];
            }
            i++;
        }
        return ans;
    }
};