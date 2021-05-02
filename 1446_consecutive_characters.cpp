class Solution {
public:
    int maxPower(string s) {
        int n = s.length();
        int ans = 1, count = 1;
        
        // count is already 1 because 
        // checking for s[i] and s[i+1]
        // gives true for 2 characters initially
        
        for(int i=0; i<n-1; i++){
            if(s[i] == s[i+1]){
                count ++;
            }
            else{
                ans = max(ans, count);
                // make sure to set count to 1
                count = 1;
            }
        }
        
        ans = max(ans, count);
        return ans;
        
    }
};