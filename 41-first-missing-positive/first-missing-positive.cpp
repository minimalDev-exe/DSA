class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int check=1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                if(nums[i]>check){
                    return check;
                }

                if(nums[i]==check){
                    check++;
                }
            }
        }
        return check;
    }
};