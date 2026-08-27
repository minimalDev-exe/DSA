class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            string temp = to_string(nums[i]);
            for(int j=0; j<temp.size(); j++){
                if(temp[j]==digit+'0') ans++;
            }
        }
        return ans;
    }
};