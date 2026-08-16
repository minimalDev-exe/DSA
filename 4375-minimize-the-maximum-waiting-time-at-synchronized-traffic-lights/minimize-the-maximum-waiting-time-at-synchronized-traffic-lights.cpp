class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int penalty = INT_MIN;
        int g = ranges::max(lights);
        for(int i=0; i<arrivalTime.size(); i++){
            int r = arrivalTime[i]%period;
            if(r<g){
                penalty = max(0,penalty);
            }
            else{
                penalty = max(penalty , period - r);
            }
        }
        return penalty;
    }
};