class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>small(26,-1);
        vector<int>capital(26,-1);
        for(int i=0; i<word.size(); i++){
            int ascii = (int)word[i];
            if(ascii>=65 && ascii<=90){
                if(capital[word[i]-'A']==-1){
                    capital[word[i]-'A'] = i;
                }
            }
            else small[word[i]-'a'] = i;
        }
        int ans = 0;
        for(int i=0; i<26; i++){
            if(small[i]!=-1 && capital[i]!=-1){
                if(small[i]<capital[i]) ans++;
            }
        }
        return ans;
    }
};