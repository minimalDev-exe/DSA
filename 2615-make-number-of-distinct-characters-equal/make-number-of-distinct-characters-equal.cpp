class Solution {
public:
    bool isItPossible(string word1, string word2) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(char c : word1){
            freq1[c-'a']++;
        }
        for(char c : word2){
            freq2[c-'a']++;
        }

        int n1 = 0 , n2 = 0;
        for(int i=0; i<26; i++){
            if(freq1[i]!=0) n1++;
            if(freq2[i]!=0) n2++;
        }

        for(int i=0; i<26; i++){
            for(int j=0; j<26; j++){
                if(freq1[i]==0 || freq2[j]==0){
                    continue;
                }

                if(i==j){
                    if(n1==n2) return true;
                    else continue;
                }
                int newN1 = n1 , newN2 = n2;
                if(freq2[i]==0) newN2++;
                if(freq1[j]==0) newN1++;
                if(freq1[i]==1) newN1--;
                if(freq2[j]==1) newN2--;

                if(newN1==newN2) return true;
            }
        }
        return false;
    }
};