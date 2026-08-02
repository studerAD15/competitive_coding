class MyQueue {
public:
    stack<int> instack;
    stack<int> outstack;
    void transfer()
    {
        while(!instack.empty())
        {
            outstack.push(instack.top());
            instack.pop();
        }
    }
    MyQueue() {
        
    }
    
    void push(int x) {
        instack.push(x);
    }
    
    int pop() {
        if(outstack.empty())
        {
            transfer();
        }
        int x=outstack.top();
        outstack.pop();
        return x;
    }
    
    int peek() {
        if(outstack.empty())
        {
            transfer();
        }
        return outstack.top();
    }
    
    bool empty() {
        return (instack.empty() && outstack.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */