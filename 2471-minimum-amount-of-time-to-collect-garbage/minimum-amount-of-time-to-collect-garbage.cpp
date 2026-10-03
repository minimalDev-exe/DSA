class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int mIdx = -1 , pIdx = -1 , gIdx = -1;
        int cntM = 0 , cntP = 0 , cntG = 0;
        for(int i=0; i<garbage.size(); i++){
            for(int j=0; j<garbage[i].size(); j++){
                if(garbage[i][j]=='M'){
                    cntM++;
                    mIdx = i;
                }
                else if(garbage[i][j]=='P'){
                    cntP++;
                    pIdx = i;
                }
                else if(garbage[i][j]=='G'){
                    cntG++;
                    gIdx = i;
                }
            }
        }
        int travelTime = 0;
        if(mIdx>0){
            for(int i=1; i<=mIdx; i++){
                travelTime+=travel[i-1];
            }
        }
        if(pIdx>0){
            for(int i=1; i<=pIdx; i++){
                travelTime+=travel[i-1];
            }
        }
        if(gIdx>0){
            for(int i=1; i<=gIdx; i++){
                travelTime+=travel[i-1];
            }
        }
        travelTime = travelTime + cntM + cntP + cntG;
        return travelTime;
    }
};