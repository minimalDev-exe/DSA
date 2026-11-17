class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,pair<double,double>>>pq;
        for(double i=0; i<classes.size(); i++){
            double x = ((double)(classes[i][0]+1)/(classes[i][1]+1))-((double)(classes[i][0])/(classes[i][1]));
            pq.push({x,{classes[i][0],classes[i][1]}});
        }
        while(extraStudents>0){
            double stu = pq.top().second.second;
            stu++;
            double passed = pq.top().second.first;
            passed++;
            pq.pop();
            double x = ((double)(passed+1)/(stu+1))-((double)(passed)/(stu));
            pq.push({x,{passed,stu}});
            extraStudents--;
        }
        double ans = 0;
        while(!pq.empty()){
            double stu = pq.top().second.second;
            double passed = pq.top().second.first;
            pq.pop();
            double avg = (double)passed/stu;
            ans+=avg;
        }
        return ans/(double)classes.size();
    }
};