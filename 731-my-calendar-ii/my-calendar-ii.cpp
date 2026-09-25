class MyCalendarTwo {
public:
    vector<pair<int,int>>bookings;
    vector<pair<int,int>>doubleBookings;

    MyCalendarTwo() {
    }
    
    bool book(int startTime, int endTime) {
        bool status = true;
        if(doubleBookings.size()==0 && bookings.size()==0){
            bookings.push_back({startTime , endTime});
            return true;
        }
        if(doubleBookings.size()>0){
            for(int i=0; i<doubleBookings.size(); i++){
                if ((doubleBookings[i].second <= startTime) || (endTime <= doubleBookings[i].first)){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        if(bookings.size()>0){
            for(int i=0; i<bookings.size(); i++){
                if ((bookings[i].second <= startTime) || (endTime <= bookings[i].first)){
                    continue;
                }
                else{
                    doubleBookings.push_back({max(bookings[i].first , startTime) , min(bookings[i].second , endTime)});
                }
            }
        }
        bookings.push_back({startTime , endTime});
        return status;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */