class Solution {
public:
    string digitSum(string s, int k) {
        if(s.size()<k) return s;
        while(s.size()>k){
            string temp = "";
            int cnt = 0 , sum = 0;
            for(int i=0; i<s.size(); i++){
                sum+=s[i]-'0';
                cnt++;
                if(cnt%k==0){
                    temp+=to_string(sum);
                    sum = 0;
                }
            }
            if(cnt%k!=0){
                temp+=to_string(sum);
            }
            s = temp;
        }
        return s;
    }
};