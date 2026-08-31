class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1) return stones[0];
        priority_queue<int>pq;
        for(int i=0; i<stones.size(); i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int max_val = pq.top();
            pq.pop();
            int new_val;
            if(max_val==pq.top()) pq.pop();
            else{
                new_val = abs(max_val - pq.top());
                pq.pop();
                pq.push(new_val);
            }
        }
        if(pq.size()==0) return 0;
        else return pq.top();
    }
};