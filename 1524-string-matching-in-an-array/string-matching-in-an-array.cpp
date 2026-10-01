class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        unordered_set<string>set;
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words.size(); j++){
                if(j!=i){
                    if(words[j].contains(words[i])){
                        set.insert(words[i]);
                    }
                }
            }
        }
        for(const auto &element : set){
            ans.push_back(element);
        }
        return ans;
    }
};