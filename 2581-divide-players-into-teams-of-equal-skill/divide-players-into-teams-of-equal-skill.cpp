class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        if(skill.size()==2){
            return skill[0]*skill[1];
        }
        sort(skill.begin(),skill.end());
        long long st = 0 , end = skill.size()-1;
        long long sum = skill[0]+skill[skill.size()-1] , ans = 0;
        while(st<end){
            if((skill[st]+skill[end])==sum){
                ans += skill[st]*skill[end];
                st++ , end--;
            }
            else{
                return -1;
            }
        }
        return ans;
    }
};