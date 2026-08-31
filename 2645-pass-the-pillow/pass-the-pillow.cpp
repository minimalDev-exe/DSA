class Solution {
public:
    int passThePillow(int n, int k) {
        n--;
        int rounds = k/n;
        int rem = k%n;
        if(rounds%2==0){
            return rem+1;
        } else{
            return n-rem+1;
        }
    }
};