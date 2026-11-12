class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        string s = to_string(nums[0]);
        long long digits = s.size();
        long long sum = 0;
        vector<vector<long long>>v(digits,vector<long long>(10,0));
        for(auto val : nums){
            string s = to_string(val);
            for(long long i=0; i<s.size(); i++){
                v[i][s[i]-'0']++;
            }
        }

        for(long long i=0; i<digits; i++){
            for(long long j=0; j<10; j++){
                for(long long k=j+1; k<10; k++){
                    sum+= (v[i][j]*v[i][k]);
                }
            }
        }
        return sum;
    }
};