class Solution {
public:
    
    int dp[1001][1001];
    // dp approach
    
    int uncrossed(vector<int>& nums1, vector<int>& nums2, int i, int j){
        
        // base case
        if(i == 0 or j == 0){
            return 0;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        // recursive case
        if(nums1[i-1] == nums2[j-1]){
            dp[i][j] = 1 + uncrossed(nums1, nums2, i-1, j-1);
            // return 1 + uncrossed(nums1, nums2, i-1, j-1);
        }
        else{
            dp[i][j] = max(uncrossed(nums1, nums2, i-1, j), uncrossed(nums1, nums2, i, j-1));
            // return max(uncrossed(nums1, nums2, i-1, j), uncrossed(nums1, nums2, i, j-1));
        }
        
        return dp[i][j];
    }
    
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        
        int i = nums1.size();
        int j = nums2.size();
        
        memset(dp,-1,sizeof(dp));
        
        return uncrossed(nums1, nums2, i, j);
    }
};