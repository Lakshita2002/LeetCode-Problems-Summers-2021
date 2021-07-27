class Solution {
public:
    
    int dp[1001][1001];
    
    int lcs(string &text1, string &text2, int s1, int s2){
        
        // base case
        if(s1==0 or s2==0){
            return 0;
        }

        if(dp[s1][s2] != -1){
            return dp[s1][s2];
        }

        // recursive case
        if(text1[s1-1]==text2[s2-1]){

            dp[s1][s2] = 1+lcs(text1, text2, s1-1, s2-1);

        }
        else{

            dp[s1][s2] = max(lcs(text1, text2, s1, s2-1), 
                                 lcs(text1, text2, s1-1, s2));

        }

        return dp[s1][s2];
        
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        int s1 = text1.length();
        int s2 = text2.length();

        memset(dp,-1,sizeof(dp));
        
        return lcs(text1, text2, s1, s2);
        
    }
};