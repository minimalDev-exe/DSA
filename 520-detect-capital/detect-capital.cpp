class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt = 0;
        for(char c : word){
            if((int)c<=90 && (int)c>=65) cnt++;
        }
        if(word.size()==cnt) return true;
        else if(cnt==0) return true;
        else if(cnt==1 && word[0]>=65 && word[0]<=90) return true;
        return false;
    }
};