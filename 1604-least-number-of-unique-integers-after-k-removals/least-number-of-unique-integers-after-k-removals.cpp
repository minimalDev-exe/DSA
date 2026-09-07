class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>map;
        for(int i=0; i<arr.size(); i++){
            map[arr[i]]++;
        }
        vector<int>vec(map.size());
        int i = 0;
        for(auto it : map){
            vec[i] = it.second;
            i++;
        }
        sort(vec.begin() , vec.end());
        int ans = map.size();
        for(int i=0; i<vec.size(); i++){
            if(k>=vec[i]){
                k-=vec[i];
                ans--;
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};