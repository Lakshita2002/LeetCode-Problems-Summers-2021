class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        // brute force implementation
        
        int ans = 0, count = 0, n = nums.size();
        
        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                count ++;
            }
            else{
                ans = max(ans, count);
                count = 0;
            }
            
        }
        
        ans = max(ans, count);
        
        return ans;
        
    }
};