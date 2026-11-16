class Solution {
public:

    int add(int num){
        if(num<10) return num;
        int sum = 0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        num = sum;
        return add(num);
    }
    int addDigits(int num) {
        return add(num);
    }
};