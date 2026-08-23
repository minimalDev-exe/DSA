class Solution {
public:
    bool isPalindromic(string s) {
        string bin = "";
        for(int i=0; i<s.size(); i++){
            int ascii = int(s[i]);
            string temp = "";
            int pushed = 0;
            while(ascii>0){
                int rem = ascii%2;
                temp.push_back(rem + '0');
                pushed++;
                ascii/=2;
            }
            if(pushed<8){
                int n = 8-pushed;
                while(n--){
                    temp.push_back('0');
                    
                }
            }
            reverse(temp.begin(),temp.end());
            bin = bin + temp;
        }
        int lt = 0 , rt = bin.size()-1;
        while(lt<=rt){
            if(bin[lt]!=bin[rt]){
                return false;
            } 
            lt++ , rt--;
        }
        return true;
    }
};