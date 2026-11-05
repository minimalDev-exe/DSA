class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0; i<nums.size(); i++){
            int n = nums[i];
            if(n%2==0){
                s.insert(2);
                while(n%2==0) n/=2;
            }

            for(int i=3; i*i<=n; i+=2){
                if(n%i==0){
                    s.insert(i);
                    while(n%i==0) n/=i;
                }
            }

            if(n>2) s.insert(n);
        }
        return s.size();
    }
};