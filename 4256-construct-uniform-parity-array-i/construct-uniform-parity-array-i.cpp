class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       int even = 0 , odd = 0;
       for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2==1) odd++;
            else even++;
       } 
       return true;
    }
};