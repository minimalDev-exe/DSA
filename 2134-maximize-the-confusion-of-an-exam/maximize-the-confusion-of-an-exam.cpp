class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
       int ans = INT_MIN;
       int lt = 0 , distinct;
       int cnt_t = 0 , cnt_f = 0;
       for(int rt=0; rt<s.size(); rt++){
            if(s[rt]=='T') cnt_t++;
            else cnt_f++;

            distinct = min(cnt_t , cnt_f);

            while(k<distinct){
                if(s[lt]=='T') cnt_t--;
                else cnt_f--;

                distinct = min(cnt_t,cnt_f);

                lt++;
            }

            ans = max(ans,rt-lt+1);
       }
       return ans; 
    }
};