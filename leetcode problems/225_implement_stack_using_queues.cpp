class MyStack {
private:
    queue<int> q1;
    queue<int> q2;
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int d) {
        if(q1.empty() and q2.empty()){
            q1.push(d);
        }
        else if(!q1.empty() and q2.empty()){
            q1.push(d);
        }
        else{
            q2.push(d);
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(!q1.empty() and q2.empty()){
            while(q1.size()>1){
                q2.push(q1.front());
                q1.pop();
            }
            int ans = q1.front();
            q1.pop();
            return ans;
        }
        else{
            while(q2.size()>1){
                q1.push(q2.front());
                q2.pop();
            }
            int ans = q2.front();
            q2.pop();
            return ans;
        }
    }
    
    /** Get the top element. */
    int top() {
        if(!q1.empty() and q2.empty()){
            while(q1.size()>1){
                q2.push(q1.front());
                q1.pop();
            }
            int ans = q1.front();
            q2.push(ans);
            q1.pop();
            return ans;
        }
        else{
            while(q2.size()>1){
                q1.push(q2.front());
                q2.pop();
            }
            int ans = q2.front();
            q1.push(ans);
            q2.pop();
            return ans;
        }
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return (q1.empty() and q2.empty());
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */