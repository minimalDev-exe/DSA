class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>vec(order.size()+1,0);
        for(int i=0; i<friends.size(); i++){
            vec[friends[i]]++;
        }
        vector<int>ans;
        for(int i=0; i<order.size(); i++){
            if(vec[order[i]]==1){
                ans.push_back(order[i]);
            }
        }
        return ans;
    }
};