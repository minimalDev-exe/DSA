class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>freqS(26,0);
        vector<int>freqT(26,0);
        for(int i=0; i<s.size(); i++){
            freqS[s[i]-'a']++;
            freqT[t[i]-'a']++;
        }
        int ans = 0;
        for(int i=0; i<26; i++){
            if(freqS[i]>0){
                if(freqS[i]!=freqT[i] && freqS[i]>freqT[i]){
                    ans+=freqS[i]-freqT[i];
                }
            }
        }
        return ans;
    }
};