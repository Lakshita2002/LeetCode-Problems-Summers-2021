class Solution {
public:
    
    int dp[501][501];
    
    Solution(){
        memset(dp, -1, sizeof(dp));
    }
    
    int editDist(string &word1, string &word2, int p1, int p2){
        
        // base case
        if(p1==0){
            return dp[p1][p2] = p2;
        }
        
        if(p2==0){
            return dp[p1][p2] = p1;
        }
        
        if(dp[p1][p2]!=-1){
            return dp[p1][p2];
        }
        
        // recursive case
        if(word1[p1-1]==word2[p2-1]){
            // ignore
            return dp[p1][p2] = editDist(word1, word2, p1-1, p2-1);
        }
        else{
            // replace
            int op1 = editDist(word1, word2, p1-1, p2-1);
            
            // insert
            int op2 = editDist(word1, word2, p1, p2-1);
            
            // delete
            int op3 = editDist(word1, word2, p1-1, p2);
            
            return dp[p1][p2] = min(op1, min(op2, op3))+1;
        }
    }
    
    int minDistance(string word1, string word2) {
        int p1 = word1.length();
        int p2 = word2.length();
        
        return editDist(word1, word2, p1, p2);
    }
};