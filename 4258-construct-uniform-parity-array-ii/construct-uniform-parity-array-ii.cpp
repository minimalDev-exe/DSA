class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = INT_MAX;
        bool odd = false;
        for(int val : nums1){
            if(val%2){
                odd = true;
                mini = min(mini , val);
            }
        }

        if(!odd) return true;
        else{
            for(int val : nums1){
                if(val%2==0 && mini>val) return false;
            }
        }
        return true;
    }
};