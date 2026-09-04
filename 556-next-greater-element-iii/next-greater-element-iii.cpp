class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int idx = -1 , val = -1;
        for(int i=s.size()-2; i>=0; i--){
            if(s[i] < s[i+1]){
                idx = i , val = s[i];
                break;
            }
        }
        if(idx==-1) return -1;
        int nextGreaterIdx = -1;
        for(int i=s.size()-1; i>idx; i--){
            if(s[i]>val){
                nextGreaterIdx = i;
                break;
            }
        }
        swap(s[idx] , s[nextGreaterIdx]);
        reverse(s.begin()+idx+1 , s.end());
        long long num = std::stoll(s);
        if(num > INT_MAX) return -1;
        
        return (int)num;
    }
};