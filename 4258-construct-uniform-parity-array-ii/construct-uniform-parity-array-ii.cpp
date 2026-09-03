class Solution {
public:
    bool uniformArray(vector<int>& nums) {
       int min_even = INT_MAX , min_odd = INT_MAX;
       for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                min_even = min(min_even , nums[i]);
            } 
            else{
                min_odd = min(min_odd , nums[i]);
            }
       }

       bool isAns = true;
       if(min_even == INT_MAX || min_odd == INT_MAX) return true;
       else{
            for(int i=0; i<nums.size(); i++){
                if(nums[i]%2==0){
                    if(nums[i]-min_odd<1){
                        isAns = false;
                        break;
                    }
                }
            }

            if(isAns) return true;
            else{
                for(int i=0; i<nums.size(); i++){
                if(nums[i]%2==1){
                    if(nums[i]-min_odd<1){
                        isAns = false;
                        break;
                    }
                }
            }
            }
       }
       return isAns;
    }
};