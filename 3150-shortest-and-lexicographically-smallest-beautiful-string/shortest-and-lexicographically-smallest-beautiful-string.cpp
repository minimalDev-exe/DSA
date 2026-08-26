class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int lt = 0 , bestLen = INT_MAX , count_1 = 0;
        for(int rt = 0; rt<s.size(); rt++){
            if(s[rt]=='1') count_1++;

            while(count_1>k){
                if(s[lt]=='1') count_1--;
                lt++;
            }

            if(count_1==k){
                while(s[lt]=='0') lt++;

                int currLen = rt-lt+1;
                if(currLen<bestLen){
                    ans = s.substr(lt , currLen);
                    bestLen = currLen;
                }
                else if(currLen==bestLen){
                    string curr = s.substr(lt , currLen);
                    if(curr<ans){
                        ans = curr;
                    }
                }
            }
        }
        return ans;
    }
};