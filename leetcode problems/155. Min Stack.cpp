class MinStack {
private:
	// stack of pair
    stack<pair<int, int>> s;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int val) {
		// the first entry in the stack
		// the min value will be val only
        if(s.empty()){
            s.push({val, val});
        }
        else{
			// the second and further entries of stack
			// here, we are keeping a track of "min val till now" 
			// in the second of pair
			// this causes no problem even when any element is popped
            s.push({val, min(val, s.top().second)});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */