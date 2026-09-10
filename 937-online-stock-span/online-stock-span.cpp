class StockSpanner {
public:
    stack<pair<int,int>>s;
    StockSpanner() {}
    int next(int price) {
        if(s.empty()){
            s.push({price , 1});
            return 1;
        }
        if(price<s.top().first){
            s.push({price , 1});
            return 1;
        }
        int cnt = 1;
        if(price >= s.top().first){
            while(s.size()>0 && s.top().first<=price){
                cnt+=s.top().second;
                s.pop();
            }
            s.push({price,cnt});
        }
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */