class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        // iterating through the string
        for(int i=0; s[i]; i++){
            char ch = s[i];
            
            switch(ch){
                // for open brackets, we will simply push it to the stack
                case '(':
                case '[':
                case '{': st.push(ch);
                    break;
                case ')': 
                    // for closed brackets we will check if the top 
                    // of the stack has the corresponding opening bracket or not
                    if(!st.empty() and st.top()=='(') st.pop();
                    else return false;
                    break;
                case ']': 
                    if(!st.empty() and st.top()=='[') st.pop();
                    else return false;
                    break;
                case '}': 
                    if(!st.empty() and st.top()=='{') st.pop();
                    else return false;
                    break;
            }
        }
        
        // finally we will check if the stack is empty or not
        // an empty stack means valid parentheses
        return st.empty();
        
    }
};