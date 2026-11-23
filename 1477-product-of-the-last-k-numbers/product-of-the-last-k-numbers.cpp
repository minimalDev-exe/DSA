class ProductOfNumbers {
public:
    ProductOfNumbers() {
        
    }
    vector<int>nums;
    void add(int num) {
        nums.push_back(num);
    }
    
    int getProduct(int k) {
        int ans = 1;
        int n = nums.size()-1;
        while(k>0){
            ans*=nums[n];
            n-- , k--;
        }
        return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */