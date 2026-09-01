class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long total = chalk[0];
        int n = chalk.size();
        if(n==1) return 0;
        vector<long long>pref(n);
        pref[0] = chalk[0];
        for(int i=1; i<n; i++){
            total+=chalk[i];
            pref[i] = pref[i-1] + chalk[i];
        }
        if(total>k){
            for(int i=0; i<n; i++){
                if(pref[i]>k) return i;
            }
        }
        else{
            long long left = k%total;
            if(left == 0) return 0;
            int st = 0 , end = n-1;
            while(st<=end){
                int mid = st + (end-st)/2;
                if(left<pref[mid]) end = mid-1;
                else st = mid+1;
            }
            return st;
        }
        return -1;
    }
};