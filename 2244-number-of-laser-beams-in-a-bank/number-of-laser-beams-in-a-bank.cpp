class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        vector<int>laserCnt;
        for(int i=0; i<bank.size(); i++){
            int cnt = 0;
            for(int j=0; j<bank[i].size(); j++){
                if(bank[i][j]=='1') cnt++;
            }
            laserCnt.push_back(cnt);
        }
        int prev = 0 , curr = 0;
        for(int i=0; i<laserCnt.size(); i++){
            if(laserCnt[i]!=0){
            curr = laserCnt[i];
            ans += prev*curr;
            prev = curr;
            }
        }
        return ans;
    }
};