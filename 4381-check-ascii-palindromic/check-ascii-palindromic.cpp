class Solution {
public:
    bool isPalindromic(string s) {
        string bin = "";
        for(int i=0; i<s.size(); i++){
            int ascii = int(s[i]);
            string temp = bitset<8>(ascii).to_string();
            bin+=temp;
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