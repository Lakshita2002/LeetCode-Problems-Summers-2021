class Solution {
public:
    
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        
        // DP approach
        // bottom up
        
        int n = stations.size();
        long long int dp[n+1];
        
        for(int i=0; i<n+1; i++){
            dp[i] = 0;
        }
        
        dp[0] = startFuel;
        
        for(int i=0; i<n; i++){
            for(int refill=i; refill>=0 and dp[refill]>=stations[i][0]; refill--){
                dp[refill+1] = max(dp[refill+1], dp[refill]+stations[i][1]);
            }
        }
        
        int ans = -1;
        
        for(int i=0; i<=n; i++){
            if(dp[i]>=target){
                ans = i;
                break;
            }
        }
        
        return ans;
    }
};