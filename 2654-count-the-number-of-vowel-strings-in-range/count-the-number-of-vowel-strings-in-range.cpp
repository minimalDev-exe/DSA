class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return true;
        }
        return false;
    }

    int vowelStrings(vector<string>& words, int left, int right) {
        int ans = 0;
        for(int i=left; i<=right; i++){
            int n = words[i].size();
            if(isVowel(words[i][0]) && isVowel(words[i][n-1])){
                ans++;
            }
        }
        return ans;
    }
};