class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>freq(26,0);
        for(char c : s){
            freq[c-'a']++;
        }
        int checkWith = -1;
        for(int i=0; i<26; i++){
            if(checkWith==-1 && freq[i]>0){
                checkWith = freq[i];
            }
            else if(freq[i]>0){
                if(freq[i]!=checkWith) return false;
            }
        }
        return true;
    }
};