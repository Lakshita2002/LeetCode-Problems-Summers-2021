class Solution {
public:
    
    int dp[1001];
    
    Solution(){
        memset(dp, -1, sizeof(dp));
    }
    
    bool divisorGame(int n) {
        
        bool r;
        
        // base case
        if(n==1){
            dp[n] = !n;
            return dp[n];
        }
        
        if(dp[n]!=-1){
            return dp[n];
        }
        
        // recursive case
        for(int x=n-1; x>0; x--){
            if(n%x==0){
                r = !divisorGame(n-x);
            }
        }
        
        dp[n] = r;
        return dp[n];
    }
};