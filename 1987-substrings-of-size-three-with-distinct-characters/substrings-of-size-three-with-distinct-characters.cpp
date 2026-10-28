class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3){
            return 0;
        }
        unordered_map<char,int>m;
        int ans = 0 , lt = 0 , rt = 0;
        while(rt<3){
            m[s[rt]]++;
            rt++;
        }
        if(m.size()==3){
            ans++;
        }
        for(rt=3; rt<s.size(); rt++){
            m[s[rt]]++;
            if(rt-lt+1>3){
                m[s[lt]]--;
                if(m[s[lt]]==0){
                    m.erase(s[lt]);
                }
                lt++;
            }
            if(rt-lt+1==3 && m.size()==3){
                ans++;
            }
        }
        return ans;
    }
};