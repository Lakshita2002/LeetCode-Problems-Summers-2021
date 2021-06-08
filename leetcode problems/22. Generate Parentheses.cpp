class Solution {
public:
    vector<string> v;
    void helper(char *s, int o, int c, int i, int n){
        // base case
        if (i == 2*n) {
            s[i] = '\0';
            v.push_back(s);
            return;
        }
        
        // recursive case
        if(o<n){
            s[i] = '(';
            helper(s, o+1, c, i+1, n);
        }
        if (c < o) {
            s[i] = ')';
            helper(s, o, c+1, i+1, n);
        }
        
    }
    
    vector<string> generateParenthesis(int n) {
        char s[100];
        helper(s, 0, 0, 0, n);
        return v;
    }
};