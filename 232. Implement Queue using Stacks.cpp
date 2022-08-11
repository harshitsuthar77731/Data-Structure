class MyQueue {
public:
    stack<int>st1;
    stack<int>st2;
    int top = -1;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(top==-1)
            top = x;
        st1.push(x);
    }
    
    int pop() {
        if(st1.size()==0)
            return -1;
        while(st1.size()>1){
            st2.push(st1.top());
            st1.pop();
        }
        int t = st1.top();
        st1.pop();
        if(st2.size()>0)
            top = st2.top();
        else
            top = -1;
        while(st2.size()>0){
            st1.push(st2.top());
            st2.pop();
        }
        return t;
    }
    
    int peek() {
        return top;
    }
    
    bool empty() {
        return st1.empty();
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
