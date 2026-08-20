class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++){
            if(m[nums[i]]%2==1){
                return false;
            } 
        }
        return true;
    }
};