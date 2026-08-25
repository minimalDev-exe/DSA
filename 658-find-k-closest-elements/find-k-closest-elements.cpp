class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        int lt=0 , rt = arr.size()-1;
        while(rt-lt>=k){
            if(abs(arr[lt]-x)>abs(arr[rt]-x)){
                lt++;
            } else{
                rt--;
            }
        }
        for(int i=lt; i<=rt; i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};