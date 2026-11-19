class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        if(intervals.size()==0){
            ans.push_back({newInterval[0],newInterval[1]});
            return ans;
        } 

        int start = newInterval[0] , end = newInterval[1];
        bool marker = false;
        for(int i=0; i<intervals.size(); i++){
            if(marker){
                ans.push_back({intervals[i][0],intervals[i][1]});
                continue;
            } 

            if(intervals[i][0]>end){
                marker = true;
                ans.push_back({start,end});
                ans.push_back({intervals[i][0],intervals[i][1]});
            }
            else if(intervals[i][1]<start){
                ans.push_back({intervals[i][0],intervals[i][1]});
            }
            else{
                start = min(intervals[i][0],start);
                end = max(intervals[i][1],end);
            }
        }
        if(!marker){
            ans.push_back({start,end});
        }
        return ans;
    }
};