class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long total=0;
        int n = chalk.size();
        for(int i=0; i<n; i++){
            total+=chalk[i];
        }
        long long left = k%total;
        for(int i=0; i<n; i++){
            if(left < chalk[i]){
                return i;
            }
            left-=chalk[i];
        }
        return 0;
    }
};