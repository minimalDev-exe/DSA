class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n<4) return false;
        if(nums[0]>nums[1]) return false;
        bool seg_1 = false , seg_2 = false , seg_3 = false;
        for(int i=0; i<n-1; i++){
            if(seg_1==false && seg_2==false && seg_3==false && nums[i]<nums[i+1]){
                seg_1 = true;
            }
            else if(seg_1==true && seg_2==false && seg_3==false && nums[i]>nums[i+1]){
                seg_2 = true;
            }
            else if(seg_1==true && seg_2==true && seg_3==false && nums[i]<nums[i+1]){
                seg_3 = true;
            }
            else if(nums[i]==nums[i+1]){
                return false;
            }
            else if(seg_1==true && seg_2==true && seg_3==true && nums[i]>nums[i+1]){
                return false;
            }
        }
        if(seg_1 && seg_2 && seg_3) return true;
        else return false;
    }
};