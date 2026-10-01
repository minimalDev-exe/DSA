class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(),beans.end());
        long long minCnt = LLONG_MAX;
        long long cnt = 0;
        long long n = beans.size();
        vector<long long>pref(beans.size());
        pref[0] = beans[0];
        for(long long i=1; i<beans.size(); i++){
            pref[i] = beans[i] + pref[i-1];
        }
        for(long long i=0; i<beans.size(); i++){
            if(i>0) cnt+=pref[i-1];
            cnt+=((pref[n-1]-pref[i])-(beans[i]*(n-1-i)));
            minCnt = min(cnt , minCnt);
            cnt = 0;
        }
        return minCnt;
    }
};