class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]].push_back(i);
        }
        int ans = 0;
        for(auto val : m){
            if(val.second.size()==3){
                if((val.second[1]-val.second[0])==(val.second[2]-val.second[1])){
                    ans++;
                }
            }
        }
        return ans;
    }
};