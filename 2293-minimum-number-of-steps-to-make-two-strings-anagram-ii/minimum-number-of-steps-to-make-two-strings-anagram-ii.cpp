class Solution {
public:
    int minSteps(string s, string t) {
        int ans = 0;
        vector<int>freqS(26,0);
        vector<int>freqT(26,0);
        for(int i=0; i<s.size(); i++){
            freqS[s[i]-'a']++;
        }
        for(int i=0; i<t.size(); i++){
            freqT[t[i]-'a']++;
        }
        for(int i=0; i<26; i++){
            ans+=abs(freqS[i]-freqT[i]); 
        }
        return ans;
    }
};