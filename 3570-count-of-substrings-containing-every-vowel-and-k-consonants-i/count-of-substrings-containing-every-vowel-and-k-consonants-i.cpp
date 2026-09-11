class Solution {
public:
    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }

    int countOfSubstrings(string word, int k) {
        int ans = countAtMost(word , k) - countAtMost(word , k-1);
        return ans;
    }

    long long countAtMost(string word , int k){
        if(k<0) return 0;
        int n = word.size();
        long long ans = 0;
        int lt = 0 , consonents= 0;

        unordered_map<char,int>m;

        unordered_map<char,int>last;

        for(int rt=0; rt<n; rt++){
            if(isVowel(word[rt])){
                m[word[rt]]++;
                last[word[rt]] = rt;
            }
            else  consonents++;

            while( consonents > k){
                if(isVowel(word[lt])){
                    m[word[lt]]--;
                    if( m[word[lt]]==0){
                        m.erase(word[lt]);
                    }
                }
                else  consonents--;

                lt++;
            }

            if(m.size()==5){
                int minLast = min({
                        last['a'],
                        last['e'],
                        last['i'],
                        last['o'] ,
                        last['u']
                        });
                ans+= minLast - lt + 1;
            }
        }
        return ans;
    }
};