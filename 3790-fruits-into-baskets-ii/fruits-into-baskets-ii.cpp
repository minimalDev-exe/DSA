class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        vector<bool>check(fruits.size(),true);
        int ans = 0;
        for(int i=0; i<fruits.size(); i++){
            bool isKept = false;
            for(int j=0; j<fruits.size(); j++){
                if(check[j] && fruits[i]<=baskets[j]){
                    isKept = true;
                    check[j] = false;
                    break;
                }
            }
            if(!isKept) ans++;
        }
        return ans;
    }
};