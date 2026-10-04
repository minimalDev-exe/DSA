class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set<string>s;
        for(string word : words){
            s.insert(word);
        }
        for(string word : s){
            for(int i=1; i<word.size(); i++){
                s.erase(word.substr(i));
            }
        }
        int ans = 0;
        for(string word : s){
            ans+= word.length() + 1;
        }
        return ans;
    }
};