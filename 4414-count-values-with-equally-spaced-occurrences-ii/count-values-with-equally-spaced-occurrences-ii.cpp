class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]].push_back(i);
        }
        int ans = 0;
        for(auto val : m){
            bool special = true;
            if(val.second.size()>=3){
                int diff = val.second[1]-val.second[0];
                for(int i=0; i<val.second.size()-1; i++){
                    if(val.second[i+1]-val.second[i]!=diff){
                        special = false;
                        break;
                    }
                }
                if(special) ans++;
            }
        }
        return ans;
    }
};