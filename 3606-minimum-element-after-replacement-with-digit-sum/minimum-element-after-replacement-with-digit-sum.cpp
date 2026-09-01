class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            string num = to_string(nums[i]);
            int digitSum = 0;
            for(int j=0; j<num.size(); j++){
                digitSum+=num[j]-'0';
            }
            nums[i] = digitSum;
        }
        int minNum = *std::min_element(nums.begin(), nums.end());
        return minNum;
    }
};