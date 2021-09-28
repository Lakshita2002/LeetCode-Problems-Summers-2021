class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        // dp approach with memory optimisation
        int dp = 0;
        int ans = 0;
        
        for(int i=2; i<nums.size(); i++){
            if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2]){
                dp = 1 + dp;
                ans += dp;
            }
            else{
                dp = 0;
            }
        }
        
        return ans;
    }
};