class Solution {
public:
    bool uniformArray(vector<int>& nums) {
       int even = 0 , odd = 0;
       int min_even = INT_MAX , min_odd = INT_MAX;
       for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                even++;
                min_even = min(min_even , nums[i]);
            } 
            else{
                odd++;
                min_odd = min(min_odd , nums[i]);
            }
       } 
       bool isAns = true;
       if(odd==0 || even==0) return true;
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
       if(isAns) return true;
       else return false;
    }
};