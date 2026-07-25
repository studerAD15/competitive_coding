class MyCalendarTwo {
public:
    vector<pair<int,int>> booking;
    vector<pair<int,int>> overlap;
    MyCalendarTwo() {
        
    }
    
    bool book(int startTime, int endTime) {
        for(auto over:overlap)
        {
            if(startTime<over.second && over.first<endTime)
            {
                return false;
            }

        }
        for(auto book:booking)
        {
            if(startTime<book.second && book.first<endTime)
            {
                overlap.push_back({max(startTime,book.first),min(endTime,book.second)});
            }
        }
    booking.push_back({startTime, endTime});
    return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */