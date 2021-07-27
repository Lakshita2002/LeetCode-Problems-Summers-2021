class Solution {
public:
    
    int dp[100];
    // memset(dp, -1, sizeof(dp));
    
    Solution(){
        memset(dp, -1, sizeof(dp));
    }
    
    int fib(int n) {
        
        // base case
        if(n==0 or n==1){
            dp[n] = n;
            return dp[n];
        }
        
        if(dp[n]!=-1){
            return dp[n];
        }
        
        // recursive case
        dp[n] = fib(n-1)+fib(n-2);
        return dp[n];
        
    }
};