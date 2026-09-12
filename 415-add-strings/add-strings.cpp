class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int m = num1.size()-1 , n = num2.size()-1;
        int carry = 0;
        while(m>=0 || n>=0 || carry!=0){
           int x = m>=0 ? num1[m]-'0' : 0;
           int y = n>=0 ? num2[n]-'0' : 0;

           int sum = x+y+carry;
           int digit = (sum)%10;
           carry = (sum)/10;
           ans += to_string(digit);
           if(m>=0) m--;
           if(n>=0) n--;
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};