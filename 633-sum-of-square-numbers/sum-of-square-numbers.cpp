class Solution {
public:
    bool judgeSquareSum(int c) {
        long long st = 0 , end = sqrt(c); 
        while(st<=end){
            if(st*st+end*end==c){
                return true;
            }
            else if(st*st+end*end<c){
                st++;
            }
            else{
                end--;
            }
        }
        return false;
    }
};