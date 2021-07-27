class Solution {
public:
    
    int dp[1000] = {0};
    
    int climbStairs(int n) {
        
        // base case
        if(n==1){
            dp[1] = 1;
            return dp[1];
        }
        if(n==2){
            dp[2] = 2;
            return dp[2];
        }
        
        if(dp[n]!=0){
            return dp[n];
        }
        
        // recursive case
        dp[n] = climbStairs(n-1)+climbStairs(n-2);
        return dp[n];
    }
};