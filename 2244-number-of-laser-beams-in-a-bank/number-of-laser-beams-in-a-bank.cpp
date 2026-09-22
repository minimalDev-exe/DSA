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
        int j=1;
        for(int i=0; i<laserCnt.size()-1; i++){
            while(laserCnt[j]==0 && j<laserCnt.size()-1) j++;
            ans += laserCnt[i]*laserCnt[j];
            if(j<laserCnt.size()-1){
                i = j-1;
                j++;
            }
            else break;
        }
        return ans;
    }
};