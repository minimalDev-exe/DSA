class Solution {
public:
    int getLucky(string s, int k) {
        string temp = "";
        for(char c : s){
            int x = c - 'a' + 1;
            temp+=to_string(x);
        }
        int ans = 0;
        int ans2;
        while(k--){
            for(int i=0; i<temp.size(); i++){
                ans+=temp[i]-'0';
            }
            ans2 = ans;
            temp = to_string(ans);
            ans = 0;
        }
        return ans2;
    }
};