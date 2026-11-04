class Solution {
public:
    int captureForts(vector<int>& forts) {
        if(forts.size()==1) return 0;
        vector<pair<int,int>>vec;
        for(int i=0; i<forts.size(); i++){
            if(forts[i]==-1) vec.push_back({-1,i});
            else if(forts[i]==1) vec.push_back({1,i});
        }
        if(vec.size()==0) return 0;
        int ans = 0;
        for(int i=0; i<vec.size()-1; i++){
            if(vec[i].first==1 && vec[i+1].first==-1){
                ans = max(ans,vec[i+1].second-vec[i].second-1);
            }
            else if(vec[i].first==-1 && vec[i+1].first==1){
                ans = max(ans,vec[i+1].second-vec[i].second-1);
            }
        }
        return ans;
    }
};