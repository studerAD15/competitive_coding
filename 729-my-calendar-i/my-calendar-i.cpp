class MyCalendar {
public:
    vector<pair<int,int>> cal;

    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        for(auto book:cal)
        {
            int s=book.first;
            int e=book.second;
            if(startTime<e && endTime>s)
            {
                return false;
            }
        }
        cal.push_back({startTime,endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */