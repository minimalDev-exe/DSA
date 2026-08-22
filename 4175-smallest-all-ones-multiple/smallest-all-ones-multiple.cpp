class Solution {
public:
    int minAllOneMultiple(int k) {
        int cnt = 1;
        unordered_set<int>s;
        int rem = 1%k;
        while(1){
            if(s.find(rem)!=s.end()){
                return -1;
            }
            else{
                s.insert(rem);
            }

            if(rem==0){
                return cnt;
            }

            rem = ((rem*10)+1)%k;
            cnt++;
        }
        return -1;
    }
};