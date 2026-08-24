class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0;
        int lt = 0 , max_freq = 0;
        unordered_map<char,int>m;
        for(int rt=0; rt<s.size(); rt++){
            m[s[rt]]++;
            max_freq = max(max_freq , m[s[rt]]);

            while((rt-lt+1) - max_freq > k){
                m[s[lt]]--;
                lt++;
            }

            if(rt-lt+1-max_freq <=k){
                res = max(res , rt-lt+1);
            }
        }
        return res;
    }
};