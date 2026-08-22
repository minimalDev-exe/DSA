class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans = -1;
        int max_freq = 0;
        unordered_map<int, int> m;
        m.reserve(nums.size()); 

        for (int num : nums) {
            if (num % 2 == 0) {
                int freq = ++m[num];

                if (freq > max_freq) {
                    max_freq = freq;
                    ans = num;
                } 
                else if (freq == max_freq && num < ans) {
                    ans = num;
                }
            }
        }
        return ans;
    }
};